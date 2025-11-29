@class MMKV, NSTimer, NSString, AWEPadLeftSideBarMiniGameGridView, AWEPadLeftSideBarMiniGameCellDataModel;

@interface AWEPadLeftSideBarMiniGamePresenter : AWELeftSideBarBasePresenter <AWEPadLeftSideBarMiniGameGridViewDelegate>

@property (retain, nonatomic) AWEPadLeftSideBarMiniGameGridView *gridView;
@property (retain, nonatomic) AWEPadLeftSideBarMiniGameCellDataModel *cellDataModel;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSTimer *redDotTimer;
@property (retain, nonatomic) NSTimer *entranceTimer;
@property (nonatomic) BOOL hasCheckRedDotForStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarOpen;
- (void)leftSideBarEntranceViewOnCreateWithAmbienceIdentification:(id)a0;
- (void)hideRedDot;
- (void)updateRedDotAndSubTitle;
- (void)checkRedDotWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)a0 endTime:(double)a1;
- (void)stopRedDotTimer;
- (id)redDotVersionKey;
- (void)checkRedDotForStart;
- (void)stopEntranceTimer;
- (void)updateRedDot;
- (BOOL)isRedDotDisplayed;
- (BOOL)isEntranceRedDotDisplayed;
- (id)entranceRedDotVersionKey;
- (void)startEntranceRemoveRedDotTimer;
- (void)startCellRedDotTimer:(double)a0 withStart:(BOOL)a1;
- (void)checkWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)a0 endTime:(double)a1 startBlock:(id /* block */)a2 endBlock:(id /* block */)a3;
- (void)updateRedDotWithTimeForStart:(BOOL)a0;
- (BOOL)checkIfCurrentTimeInRangeWithStartTime:(double)a0 endTime:(double)a1;
- (void)padMiniGameCardOnClick;
- (void)padMiniGameCellOnCreate:(id)a0;
- (void)padMiniGameCellOnClick:(id)a0;
- (id)leftSideBarMiniGameCellDataModel:(id)a0;
- (void)trackMpShowEvent:(id)a0;
- (void)trackMpClickEvent:(id)a0;
- (void)recordRedDotStateIfNeed;
- (void)handleGridViewSchemaRoute:(id)a0 isNeedLogin:(BOOL)a1;
- (void)showRedDot;
- (void).cxx_destruct;

@end
