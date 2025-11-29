@class MMFinderLiveConnectMicPkSelectionModel, MMFinderLiveBattleDurationItem, NSString, MMUIButton, UITableView;

@interface MMFinderLiveConnectMicAudioRoomPkSelectPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate, MMFinderLiveConnectMicPkSelecting>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMUIButton *confirmButton;
@property (retain, nonatomic) MMFinderLiveConnectMicPkSelectionModel *model;
@property (nonatomic) unsigned long long selectedBattleMode;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *selectedDuration;
@property (copy, nonatomic) id /* block */ selectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)initiateSelection;
- (void)layoutSubviews;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onPkDurationSelected:(id)a0 fromPageSheet:(id)a1;
- (void)onCanceled;
- (void)onConfirmed;
- (void)initializeComponents;
- (id)dequeueGenericItemCellForIndexPath:(id)a0;
- (id)dequeueDurationCellForIndexPath:(id)a0;
- (void)navigateToDurationSelectionPanel;
- (void)updateSelection;
- (id)createSelectionResult;
- (void)updateConfirmButtonEnabled;
- (void).cxx_destruct;

@end
