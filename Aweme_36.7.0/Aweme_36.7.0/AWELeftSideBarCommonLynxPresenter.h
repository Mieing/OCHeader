@class AWELeftSideBarCommonLynxErrorView, NSString, NSDictionary, AWESideBarCommonLynxDataModel, AWEUILoadingView, UIView, AWELeftSideBarTimeManager;
@protocol BDXViewContainerProtocol;

@interface AWELeftSideBarCommonLynxPresenter : AWELeftSideBarBasePresenter <BDXContainerLifecycleProtocol, AWELeftSideBarCommonLynxPresenterEventProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) AWELeftSideBarCommonLynxErrorView *errorView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) AWESideBarCommonLynxDataModel *dataModel;
@property (nonatomic) long long lynxStatus;
@property (nonatomic) BOOL bannerCellSelected;
@property (nonatomic) BOOL cellViewHasAppear;
@property (nonatomic) BOOL cellViewHasTrackShow;
@property (nonatomic) long long bannerCellPosition;
@property (nonatomic) double loadingTime;
@property (retain, nonatomic) AWELeftSideBarTimeManager *timeManager;
@property (nonatomic) BOOL cellHasPreciseFuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarBannerCellViewWillAppear;
- (void)leftSideBarBannerCellViewDidAppear;
- (void)leftSideBarBannerCellViewDidDisAppear;
- (void)leftSideBarBannerCellViewDidClickClose;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)p_dataModelWithExtra:(id)a0;
- (void)handleViewDidAppearIfNeed:(id)a0;
- (void)p_setPreciseFuseTokenDestroyStage:(id)a0;
- (void)handleViewDidAppearIfNeed:(BOOL)a0 condition:(id)a1;
- (void)track_lynxCardShowIfNeed;
- (BOOL)checkAndStartTimerOrNeedForceRemove:(BOOL)a0;
- (id)sidebarCommonLynxProps;
- (id)p_createLeftSideBarListCellView;
- (void)reloadLynxView;
- (void)p_trySetPreciseFuseTokenCreateStage:(id)a0;
- (void)leftSideBarLynxContainer:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (double)leftSideBarLynxContainerWidth;
- (double)leftSideBarLynxContainerHeight;
- (void)didClickLynxView;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
