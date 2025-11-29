@class NSString, MMFinderLiveRewardGiftItem, MMFinderLiveConnectMicPkSelectionModel, MMFinderLiveBattleDurationItem, MMFinderLiveTaskId, UITableView, NSMutableArray, MMUIButton;

@interface MMFinderLiveConnectMicExtendedPkSelectPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate, MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate, MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate, MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate, MMFinderLiveConnectMicPkSelecting>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *micVirtualRoomId;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMFinderLiveConnectMicPkSelectionModel *model;
@property (nonatomic) unsigned long long selectedBattleMode;
@property (nonatomic) BOOL anchorParticipating;
@property (nonatomic) BOOL audienceParticipating;
@property (nonatomic) BOOL designatedGiftEnabled;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *designatedGiftItem;
@property (nonatomic) unsigned long long originalLayoutMode;
@property (nonatomic) unsigned long long selectedLayoutMode;
@property (readonly, nonatomic) BOOL isAnchorPkChangeLayoutEnabled;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration;
@property (retain, nonatomic) NSMutableArray *playModeSectionItems;
@property (retain, nonatomic) NSMutableArray *pkSettingSectionItems;
@property (copy, nonatomic) id /* block */ selectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 micVirtualRoomId:(id)a1;
- (void)updateWithModel:(id)a0;
- (void)updateInitialSelectData;
- (void)reloadData;
- (void)updatePlayModeSectionData;
- (void)updatePkSettingSectionData;
- (unsigned long long)lastSelectPlayModeItem;
- (void)fixSelectionOptionsConflict;
- (void)initiateSelection;
- (BOOL)isCrossRoomPkEnabled;
- (id)liveTask;
- (void)layoutSubviews;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onPkDesignatedGiftSelected:(id)a0 fromPageSheet:(id)a1;
- (void)onPkDurationSelected:(id)a0 fromPageSheet:(id)a1;
- (void)onSwitchStateChangedTo:(BOOL)a0 forAnchorParticipatingCell:(id)a1;
- (void)onConnectMicAnchorPkLayoutModeChangeConfirmed:(unsigned long long)a0;
- (void)onCanceled;
- (void)onConfirmed;
- (void)initializeComponents;
- (id)dequeueGenericItemCellForIndexPath:(id)a0;
- (id)dequeueAnchorParticipatingCellForIndexPath:(id)a0;
- (id)dequeueDesignatedGiftItemCellForIndexPath:(id)a0;
- (id)dequeueDurationCellForIndexPath:(id)a0;
- (id)dequeueLayoutModeCellForIndexPath:(id)a0;
- (void)navigateToDesignatedGiftSelectionPanel;
- (void)navigateToDurationSelectionPanel;
- (void)navigateToLayoutModeSelectionPanel;
- (void)updateSelection;
- (BOOL)anchorParticipatingOptionApplicable;
- (id)createSelectionResultApplyingFinalDiagnostics:(BOOL)a0;
- (void)updateConfirmButtonEnabled;
- (void).cxx_destruct;

@end
