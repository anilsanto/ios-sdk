#import <UIKit/UIKit.h>


typedef void (^DoorbellCompletionBlock)(NSError *error, BOOL isCancelled);


@interface Doorbell : NSObject

@property (strong, nonatomic)   UIColor * primaryColor;
@property (strong, nonatomic)   UIColor * titleColor;
@property (strong, nonatomic)   UIColor * buttonTextColor;
@property (strong, nonatomic)   UIFont * titleFont;
@property (strong, nonatomic)   UIFont * textFont;
@property (strong, nonatomic)   UIFont * buttonFont;

@property (strong, nonatomic)   NSString *apiKey;
@property (strong, nonatomic)   NSString *appID;
@property (strong, nonatomic)   NSString *email;
@property (strong, nonatomic)   NSString *name;
@property (assign, nonatomic)   BOOL showEmail;
@property (assign, nonatomic)   BOOL showPoweredBy;
@property (assign, nonatomic)   CGFloat verticleOffset;
@property (assign, nonatomic)   NSInteger viewTag;

- (id)initWithApiKey:(NSString *)apiKey appId:(NSString *)appID;

+ (Doorbell*)doorbellWithApiKey:(NSString *)apiKey appId:(NSString *)appID;

- (void)showFeedbackDialogInViewController:(UIViewController *)vc completion:(DoorbellCompletionBlock)completion animated:(BOOL) animated;

- (void)addPropertyWithName:(NSString*)name AndValue:(id)value;

- (void)addImage:(UIImage *)image WithName:(NSString *)name;

@end
