@class CJPayNetworkErrorContext, CJPayNoNetworkContainerView, CJPayCommonExceptionView, CJPayStandardErrorDefaultView;

@interface CJPayFullPageBaseViewController : CJPayBaseViewController

@property (retain, nonatomic) CJPayNoNetworkContainerView *noNetworkContainerView;
@property (retain, nonatomic) CJPayCommonExceptionView *systemBusyView;
@property (retain, nonatomic) CJPayNetworkErrorContext *errorContext;
@property (retain, nonatomic) CJPayStandardErrorDefaultView *errorDefaultView;
@property (nonatomic) long long lastSystemStatusBarStyle;
@property (nonatomic) BOOL isShowErrorView;

- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 completion:(id /* block */)a2;
- (void)closeWithCompletionBlock:(id /* block */)a0;
- (id)noNetworkContainerView;
- (long long)vcType;
- (double)navigationHeight;
- (void)reloadCurrentView;
- (void)showNoNetworkView;
- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 presentStyle:(long long)a2 completion:(id /* block */)a3;
- (BOOL)cjNeedAnimation;
- (long long)cjpay_preferredStatusBarStyle;
- (BOOL)isNoNetworkViewShowing;
- (void)showNoNetworkViewUseThemeStyle:(BOOL)a0 errorContext:(id)a1;
- (void)hideNoNetworkView;
- (BOOL)cjShouldShowBottomView;
- (void)showNoNetworkToast;
- (id)errorContext;
- (void)showNoNetworkViewUseThemeStyle:(BOOL)a0;
- (void)setErrorContext:(id)a0;
- (id)systemBusyView;
- (void)showSystemBusyView;
- (void)hideSystemBusyView;
- (void)showStandardErrorDefaultViewWithClickAction:(id /* block */)a0;
- (void)hideStandardErrorDefaultView;
- (void)adapterIpad;
- (void)close;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
