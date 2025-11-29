@class AWEUILoadingView, DYRouterModel;

@interface DYQuickBindLoadingViewController : UIViewController

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ finishBlock;

- (id)initWithContext:(id)a0 cancelBlock:(id /* block */)a1 finishBlock:(id /* block */)a2;
- (void)showPhoneBindViewController;
- (void)showQuickBindViewControllerWithPhoneNumber:(id)a0 carrier:(long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;

@end
