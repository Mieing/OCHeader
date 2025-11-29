@class AWELeftSideBarRecentVisitAppContainerView, NSMutableDictionary, NSString, AWELeftSideBarRecentVisitAppCellConfig, AWELeftSideBarDynamicDataAppModel, AWELeftSideBarAppPresenterActionContext, BDXBridgeEventSubscriber;

@interface AWELeftSideBarRecentVisitAppPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarRecentVisitAppContainerViewDelegate>

@property (retain, nonatomic) AWELeftSideBarRecentVisitAppContainerView *containerView;
@property (retain, nonatomic) AWELeftSideBarRecentVisitAppCellConfig *config;
@property (nonatomic) double containerViewHeight;
@property (retain, nonatomic) AWELeftSideBarDynamicDataAppModel *leftSideBarDynamicDataAppModel;
@property (nonatomic) BOOL recentVisitAppUIIsShow;
@property (nonatomic) BOOL needForceRefreshWhenAppear;
@property (nonatomic) double uniqId;
@property (nonatomic) double openTime;
@property (retain, nonatomic) AWELeftSideBarAppPresenterActionContext *actionContext;
@property (retain, nonatomic) NSMutableDictionary *performanceDict;
@property (nonatomic) BOOL hasClick;
@property (retain, nonatomic) BDXBridgeEventSubscriber *removeMpCacheSubscribe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1;
- (void)leftSideBarViewDynamicModuleRequestDataFailed;
- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarWillOpen;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDidAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillDisAppear;
- (void)showReloadAnimation;
- (void)leftSideBarPresenterOnCreate;
- (void)leftSideBarViewDynamicModuleForceRequestDataComplete:(id)a0;
- (id)contentViewWithSubBusinessID:(id)a0;
- (id)getIronManModuleService;
- (id)leftSideBarListCellDataModel:(id)a0;
- (void)updateDynamicData:(id)a0 isCacheData:(BOOL)a1;
- (id)leftSideBarRecentVisitAppContainerViewGetLeftSideBarIdentification:(id)a0;
- (void)leftSideBarRecentVisitAppContainerViewDidUpdateData:(id)a0 modules:(id)a1 fromCache:(BOOL)a2;
- (double)leftSideBarRecentVisitAppContainerViewGetUniqId:(id)a0;
- (void)leftSideBarRecentVisitAppContainerView:(id)a0 showHighValueModel:(id)a1 index:(long long)a2;
- (void)leftSideBarRecentVisitAppContainerView:(id)a0 clickHighValueModel:(id)a1 index:(long long)a2;
- (void)leftSideBarRecentVisitAppContainerView:(id)a0 clickAllButtonWithSchema:(id)a1;
- (void)leftSideBarRecentVisitAppContainerView:(id)a0 clickLinkModel:(id)a1;
- (void)leftSideBarRecentVisitAppContainerView:(id)a0 clickCellWithItemModel:(id)a1 withSchema:(id)a2 index:(long long)a3;
- (id)leftSideBarRecentVisitAppContainerView:(id)a0 getLeftSideBarTrackParamsForBusiness:(id)a1;
- (id)leftSideBarListCellConfigDataModel:(id)a0;
- (void)addRemoveAppCacheSubscriber;
- (void)p_reportSidebarUseInfo;
- (void)realRequestAppCaption;
- (void)p_requestCaptionCallbackWithIsDisplay:(BOOL)a0 isClick:(BOOL)a1 getCaptionModel:(id)a2 completion:(id /* block */)a3;
- (void)p_requestAppCaption;
- (BOOL)moduleCanShow;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1 isForceRefresh:(BOOL)a2;
- (void)preloadTimorContext;
- (void)track_leftSideBarRecentVisitAppShow:(BOOL)a0;
- (long long)calculateMaxLineCount;
- (id)p_traceParamsForDynamicItemDataModel:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)setupConfig;
- (double)calculateHeight;

@end
