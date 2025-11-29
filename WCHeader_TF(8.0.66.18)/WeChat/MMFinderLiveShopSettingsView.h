@class MMFinderLiveShopSettingAskForPromotingAdapter, WCTableViewManager, MMFinderLiveTaskId;
@protocol MMFinderLiveShopSettingsViewDelegate;

@interface MMFinderLiveShopSettingsView : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveShopSettingAskForPromotingAdapter *askForPromotingAdapter;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (nonatomic) long long disappearReason;
@property (weak, nonatomic) id<MMFinderLiveShopSettingsViewDelegate> delegate;

+ (BOOL)shouldShowSettingViewForTaskID:(id)a0;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)reportForItemsExpose;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)configureOptionTableView;
- (void)addSettingSections;
- (void)addRecordReplayToSection:(id)a0;
- (void)addPreHotToSection:(id)a0;
- (void)addAskForPromotingCellToSection:(id)a0;
- (id)createSwitchCellForSEL:(SEL)a0 title:(id)a1 value:(BOOL)a2;
- (void)addRecordCellsToSection:(id)a0;
- (void)addFlashSaleSectionIfNeed;
- (void)addGoodsRankWaySection;
- (void)addNewGoodsPositionSection;
- (id)commonSelectIcon;
- (void)pageSheetDidDisappear;
- (void)onReplaySwitchClick:(id)a0;
- (void)onReplaySwitchValueChangedTo:(BOOL)a0;
- (void)onReplayTypeValueChangedTo:(int)a0;
- (void)onPreHotSwitchClick:(id)a0;
- (void)onFlashSaleSwitchClick:(id)a0;
- (void)onFlashSaleOrderClicked;
- (void)onClickRankFromBottom;
- (void)onClickRankFromTop;
- (void)onClickAddFromBottom;
- (void)onClickAddFromTop;
- (void)updateOrderAscFlagTo:(int)a0;
- (void)updateOrderEndInsertFlagTo:(int)a0;
- (void)updateReplaySwitch:(int)a0 replayType:(int)a1;
- (void)onAskForPromotingClick:(id)a0;
- (void)reportAnchorAction:(long long)a0 replaySwitch:(int)a1 replayType:(int)a2;
- (id)getCurrentLeftButton;
- (void)leftButtonAction;
- (double)fixedHeight;
- (id)currentOrderSetting;
- (id)liveTask;
- (int)replayType;
- (int)replaySwitch;
- (void).cxx_destruct;

@end
