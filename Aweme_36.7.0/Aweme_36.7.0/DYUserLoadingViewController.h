@class DYRouterModel, AWEUILoadingView;
@protocol DYUserLoadingControl;

@interface DYUserLoadingViewController : UIViewController

@property (retain, nonatomic) id<DYUserLoadingControl> control;
@property (retain, nonatomic) DYRouterModel *router;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (id)initWithContext:(id)a0 control:(id)a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;

@end
