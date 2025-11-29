@protocol AWEAwemePlayInteractionCommerceDelegate;

@interface AWEVideoControlPlugin : NSObject

@property (weak, nonatomic) id<AWEAwemePlayInteractionCommerceDelegate> interactionViewControllerDelegate;

+ (id)shareInstance;

- (void)handleVideoPlayNotification:(id)a0;
- (void).cxx_destruct;

@end
