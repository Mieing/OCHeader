@class UIView, MMTableViewInfo, MMFinderLiveTaskId;

@interface MMFinderLiveSettingPanel : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableViewInfo *settingTableViewInfo;
@property (copy, nonatomic) id /* block */ pipSwitchChangeCallback;

+ (BOOL)hasSettingEntranceForLive:(id)a0;

- (id)initWithTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (id)getCurrentLeftButton;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (double)contentWidth;
- (double)contentHeight;
- (void)layoutSettingTable;
- (void)reloadSettingTable;
- (void)addPIPSwitchCellInSection:(id)a0;
- (void)leftButtonAction;
- (void)onPIPSettingSwitch:(id)a0;
- (void)pageSheetDidDisappear;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
