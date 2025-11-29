@class MMFinderLiveConnectMicModePreviewView, NSString, NSArray, MMFinderLiveTaskId, MMFinderLiveConnectMicLayoutModeSubtitleWrap, UITableView;
@protocol MMFinderLiveConnectMicModePageSheetViewDelegate;

@interface MMFinderLiveConnectMicModePageSheetView : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveConnectMicModePageSheetSwitchCellDelegate, MMLiveTaskMgrExt, MMFinderLiveConnectMicConditionChooseDelegate, MMFinderLiveConnectMicSelectConnectModeDelegate>

@property (retain, nonatomic) MMFinderLiveConnectMicModePreviewView *previewView;
@property (retain, nonatomic) UITableView *usersTableView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL modeSelectionEnabled;
@property (nonatomic) unsigned long long originalMode;
@property (retain, nonatomic) NSString *originalFocusedUserId;
@property (retain, nonatomic) NSArray *micUsers;
@property (nonatomic) unsigned long long anchorMicIndex;
@property (nonatomic) unsigned long long selectedMode;
@property (nonatomic) BOOL focusEnabled;
@property (retain, nonatomic) NSString *focusedUserId;
@property (nonatomic) BOOL modeOrFocusChanged;
@property (retain, nonatomic) MMFinderLiveConnectMicLayoutModeSubtitleWrap *micLayoutModeSubtitleWrap;
@property (nonatomic) unsigned long long selectedCondition;
@property (nonatomic) BOOL autoConnect;
@property (nonatomic) unsigned long long disabledConditions;
@property (nonatomic) BOOL focusOnly;
@property (weak, nonatomic) id<MMFinderLiveConnectMicModePageSheetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rearrangedMicUserIndicesOf:(id)a0 anchorMicIndex:(unsigned long long)a1 anchorSdkUserId:(id)a2 targetMode:(unsigned long long)a3 targetFocusingUserId:(id)a4;
+ (id)rearrangedMicUserIndicesForStandardModeOf:(id)a0 anchorMicIndex:(unsigned long long)a1 anchorSdkUserId:(id)a2;
+ (id)rearrangedMicUserIndicesForFocusModeOf:(id)a0 anchorMicIndex:(unsigned long long)a1 anchorSdkUserId:(id)a2 focusingUserId:(id)a3;
+ (id)rearrangedMicUserIndicesForGrabModeOf:(id)a0 anchorMicIndex:(unsigned long long)a1 anchorSdkUserId:(id)a2;
+ (id)rearrangedMicUserIndicesForLeadModeOf:(id)a0 anchorMicIndex:(unsigned long long)a1 anchorSdkUserId:(id)a2 focusingUserId:(id)a3;
+ (id)micUsersSortedByMicIndexOf:(id)a0;

- (id)initWithTaskId:(id)a0 condition:(unsigned long long)a1 incomingAutoConnect:(BOOL)a2 disabledConditions:(unsigned long long)a3 mode:(unsigned long long)a4 focusedUserId:(id)a5 subtitleWrap:(id)a6 modeSelectionEnabled:(BOOL)a7;
- (id)initFocusOnlyPanelWithTaskId:(id)a0 mode:(unsigned long long)a1 focusedUserId:(id)a2;
- (void)commonInitWithTaskId:(id)a0 micLayoutMode:(unsigned long long)a1 focusedUserId:(id)a2;
- (void)setSelectedMode:(unsigned long long)a0 focusEnabled:(BOOL)a1;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onConfirmed;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onSwitchToggledForSwitchCell:(id)a0;
- (void)onLiveTask:(id)a0 micUsersInfoChanged:(id)a1;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)a0;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(BOOL)a0;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)setupPageSheetConfig;
- (id)createRightButton;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)updateMicUsers;
- (void)updateTableSelection;
- (void)updatePreview;
- (id)dequeueGenericCell;
- (id)conditionTitleForType:(unsigned long long)a0;
- (void)showMicConditionChoosePanel;
- (void)showSelectConnectModePanel;
- (id)liveTask;
- (id)getAnchorSdkUserId;
- (void).cxx_destruct;

@end
