@class NSMutableSet, AWELeftSideBarActivityCellDataModel, AWELeftSideBarListCellDataModel, MMKV, UIView, NSTimer, AWELeftSideBarTimeManager;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarActivityPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;
@property (retain, nonatomic) AWELeftSideBarActivityCellDataModel *cellDataModel;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *viewModel;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSTimer *redDotTimer;
@property (retain, nonatomic) NSTimer *subTitleTimer;
@property (retain, nonatomic) NSTimer *entranceTimer;
@property (nonatomic) BOOL hasCheckRedDotForStart;
@property (retain, nonatomic) AWELeftSideBarTimeManager *timeManager;
@property (retain, nonatomic) NSMutableSet *showSubEntranceBadgeTypeSet;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarPresenterOnCreate;
- (void)leftSideBarEntranceViewOnCreateWithAmbienceIdentification:(id)a0;
- (void)updateSubTitle;
- (void)hideRedDot;
- (id)leftSideBarActivityCellDataModel:(id)a0;
- (id)leftSideBarListCellDataModel;
- (void)p_tryConsumeSubEntranceBadge;
- (void)updateRedDotAndSubTitle;
- (void)checkRedDotWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)a0 endTime:(double)a1;
- (void)stopRedDotTimer;
- (void)checkSubTitleWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)a0 endTime:(double)a1;
- (void)stopSubTitleTimer;
- (id)redDotVersionKey;
- (id)subTitleVersionKey;
- (void)hideSubTitle;
- (void)checkRedDotForStart;
- (void)stopEntranceTimer;
- (BOOL)p_canShowRedDot;
- (void)p_tryShowSubEntranceBadgeWithBadgeType:(long long)a0;
- (void)updateRedDot;
- (BOOL)isRedDotDisplayed;
- (BOOL)isSubTitleDisplayed;
- (BOOL)isEntranceRedDotDisplayed;
- (id)entranceRedDotVersionKey;
- (void)startEntranceRemoveRedDotTimer;
- (void)p_tryHideSubEntranceBadgeWithBadgeType:(long long)a0;
- (BOOL)p_canShowSubEntranceBadgeWithBadgeType:(long long)a0;
- (void)p_tryConsumeSubEntranceBadgeWithBadgeType:(long long)a0;
- (id)p_subEntranceBadgeVersionKeyWithType:(long long)a0;
- (id)p_serverBadgeVersionWithBadgeType:(long long)a0;
- (id)p_clientBadgeVersionWithBadgeType:(long long)a0;
- (void)startCellRedDotTimer:(double)a0 withStart:(BOOL)a1;
- (void)startCellSubTitleTimer:(double)a0 withStart:(BOOL)a1;
- (void)updateRedDotWithTimeForStart:(BOOL)a0;
- (void)updateSubTitleWithTimeForStart:(BOOL)a0;
- (void)showRedDot;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showSubTitle;

@end
