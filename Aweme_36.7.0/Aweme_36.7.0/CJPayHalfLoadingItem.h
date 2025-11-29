@class UIViewController, CJPayWindow, CJPayAccountInsuranceTipView, CJPayTimerManager, UINavigationController, NSString, BDImageView;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayHalfLoadingItem : CJPayHalfPageBaseViewController <CJPayAdvanceLoadingProtocol>

@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayWindow *loadingWindow;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) CJPayTimerManager *timerManager;
@property (weak, nonatomic) UIViewController *topVc;
@property (weak, nonatomic) UINavigationController *originNavigationController;
@property (copy, nonatomic) NSString *loadingIdentifer;
@property (nonatomic) double timeoutInSec;
@property (nonatomic) BOOL loadItemNeedDarkMode;
@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjNeedAnimation;
- (BOOL)isTrackPerformPageAppear;
- (id)cj_customTopVC;
- (void)p_refreshUI;
- (void)p_stopLoading;
- (void)startLoadingWithTitle:(id)a0;
- (void)p_startLoading;
- (void)addLoadingCount;
- (void)resetLoadingCount;
- (void)startLoadingWithAttributes:(id)a0;
- (void)startLoadingWithVc:(id)a0;
- (void)startLoadingWithVc:(id)a0 title:(id)a1;
- (void)startLoadingWithValidateTimer:(BOOL)a0;
- (id)getLoadingView;
- (double)halfLoadingTimeout;
- (void)p_push;
- (BOOL)p_isNeedHideNavBar;
- (void)p_setupUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)startLoading;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (id)loadingTitle;
- (double)containerHeight;

@end
