@class AWELeftSideBarRecentVisitUserContainerView, AWELeftSideBarRecentVisitUserCellConfig, AWELeftSideBarDynamicUserDataModel, NSString;

@interface AWELeftSideBarRecentVisitUserPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarRecentVisitUserContainerViewDelegate>

@property (retain, nonatomic) AWELeftSideBarRecentVisitUserContainerView *containerView;
@property (nonatomic) double containerViewHeight;
@property (retain, nonatomic) AWELeftSideBarRecentVisitUserCellConfig *config;
@property (retain, nonatomic) AWELeftSideBarDynamicUserDataModel *leftSideBarDynamicDataModel;
@property (nonatomic) BOOL recentVisitUserUIIsShow;
@property (nonatomic) BOOL leftSideBarViewIsShow;
@property (nonatomic) BOOL needForceRefresh;
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
- (void)onLeftSideBarOpen;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)showReloadAnimation;
- (void)leftSideBarViewDynamicModuleForceRequestDataComplete:(id)a0;
- (void)updateDynamicData:(id)a0 isCacheData:(BOOL)a1;
- (id)leftSideBarListCellDynamicDataModel:(id)a0;
- (id)leftSideBarListCellConfigDataModel:(id)a0;
- (BOOL)moduleCanShow;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:(id)a0 isCacheData:(BOOL)a1 isForceRefresh:(BOOL)a2;
- (long long)calculateMaxLineCount;
- (void)leftSideBarRecentVisitUserContainerView:(id)a0 clickAllButtonWithSchema:(id)a1;
- (void)leftSideBarRecentVisitUserContainerView:(id)a0 clickCellWithItemModel:(id)a1 withSchema:(id)a2 index:(long long)a3;
- (BOOL)isEnableFreqVisitPeople;
- (void)track_leftSideBarRecentVisitUserShow:(BOOL)a0;
- (void)track_leftSideBarRecentVisitUserRevisitCellClickWithItemModel:(id)a0;
- (BOOL)hasLiveWithItemModel:(id)a0;
- (void)track_leftSideBarEnterPersonalDetailWithItemModel:(id)a0;
- (void)track_leftSideBarRecentVisitUserLiveHeadShow:(id)a0 roomID:(id)a1;
- (void).cxx_destruct;
- (void)setupConfig;
- (double)calculateHeight;

@end
