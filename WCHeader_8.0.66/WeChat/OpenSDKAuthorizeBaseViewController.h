@protocol MMAuthorizeViewControllerDelegate;

@interface OpenSDKAuthorizeBaseViewController : MMUIViewController

@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onOAuthCancel;
- (void).cxx_destruct;

@end
