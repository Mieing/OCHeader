@protocol MMAuthorizeViewControllerDelegate;

@interface ScanCodeAuthorizeBaseViewController : MMWindowViewController

@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)onOAuthCancel;
- (void).cxx_destruct;

@end
