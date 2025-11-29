@class UIImageView, NSString, UIView;
@protocol CJPayNavigationBarViewProtocol;

@interface CJPayBaseViewController : UIViewController <CJPayNavigationBarDelegate>

@property (nonatomic) BOOL lastSystemNavBarHidden;
@property (nonatomic) BOOL isFirstCurrentVCAppear;
@property (retain, nonatomic) UIView<CJPayNavigationBarViewProtocol> *navigationBar;
@property (copy, nonatomic) id /* block */ lifeCycleBlock;
@property (readonly, nonatomic) long long vcType;
@property (weak, nonatomic) UIImageView *transitionBGImageView;
@property (nonatomic) BOOL isIgnoreEvokeManage;
@property (readonly, nonatomic) BOOL isShowMask;
@property (readonly, nonatomic) BOOL useStandardUIComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageNameMap;

- (void)registerBtmPage:(id)a0 params:(id)a1;
- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)aweDisableFullscreenPopTransition;
- (void)event:(id)a0 params:(id)a1;
- (void)userDidTakeScreenshot;
- (void)trackPageShow;
- (BOOL)supportDarkMode;
- (void)useCloseBackBtn;
- (void)trackBTMModuleClick:(id)a0 params:(id)a1;
- (void)trackBTMModuleShow:(id)a0 params:(id)a1;
- (void)trackBTMModuleCustom:(id)a0 params:(id)a1;
- (id)presentWithNavigationControllerFrom:(id)a0 useMask:(BOOL)a1 presentStyle:(long long)a2 completion:(id /* block */)a3;
- (BOOL)supportStdNaviBar;
- (id)p_createBTMParams:(id)a0 host:(id)a1 params:(id)a2;
- (id)getStandardNaviBar;
- (BOOL)p_enableBTM;
- (void)toutiaoTrick;
- (void)localThemeTypeChange;
- (void)p_performTrackAppDidInForeground;
- (void)pageEventWitLifeCycle:(long long)a0;
- (void)p_preferTheme:(id)a0;
- (BOOL)isTrackPerformPageAppear;
- (void)chooseCustomBackBtnWithImageName:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)share;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setNavTitle:(id)a0;
- (void)back;

@end
