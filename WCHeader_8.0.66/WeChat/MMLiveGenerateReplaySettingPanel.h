@class NSString, MMLiveReplaySetting, WCFinderLiveAnchorLogReporter, MMFinderLiveTask, UITableView, NSMutableArray, RichTextView, MMLiveGenerateReplaySettingSwitchItem, WCFinderLiveStarterReporter;
@protocol MMLiveGenerateReplaySettingPanelDelegate;

@interface MMLiveGenerateReplaySettingPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, MMLiveGenerateReplaySettingSwitchCellDelegate>

@property (retain, nonatomic) MMLiveReplaySetting *originalSetting;
@property (retain, nonatomic) MMLiveReplaySetting *currentSetting;
@property (nonatomic) BOOL hasCheckedSettingResult;
@property (retain, nonatomic) MMLiveGenerateReplaySettingSwitchItem *mainSwitchItem;
@property (retain, nonatomic) MMLiveGenerateReplaySettingSwitchItem *highlightSwitchItem;
@property (retain, nonatomic) MMLiveGenerateReplaySettingSwitchItem *barrageSwitchItem;
@property (retain, nonatomic) NSMutableArray *settingSwitchItemList;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) RichTextView *bottomTipView;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter;
@property (weak, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) WCFinderLiveStarterReporter *starterReporter;
@property (weak, nonatomic) id<MMLiveGenerateReplaySettingPanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReplaySetting:(id)a0 anchorReporter:(id)a1 liveTask:(id)a2 starterReporter:(id)a3;
- (void)initSettingSwitchItems;
- (id)generateSettingSwitchItemWithTitle:(id)a0 desc:(id)a1 isMainSwitch:(BOOL)a2 isEnabled:(BOOL)a3;
- (double)pageDetailViewHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutBottomTipView;
- (void)layoutTableView;
- (void)pageSheetWillClose:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onLiveGenerateReplaySettingSwitchCellSwitchValueChanged:(BOOL)a0 settingSwitchItem:(id)a1;
- (void)reportDataWithType:(unsigned long long)a0 action:(unsigned long long)a1;
- (void).cxx_destruct;

@end
