@class FixTitleColorButton, MMFinderLiveCreateVoteHeaderTableViewCell, UIView, MMFinderLiveLiveVoteChoice, NSString, MMFinderLiveTaskId, MMFinderLiveLiveVoteItem, MMFinderLiveVoteDurationPickerView, MMTableView, NSIndexPath;

@interface MMFinderLiveCreateVoteViewController : MMUILandscapeSheetViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveCreateVoteHeaderTableViewCellDelegate, WCActionSheetDelegate, MMFinderLiveVoteDurationPickerViewDelegate, MMTableViewDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *tableViewHeaderBackgroundView;
@property (retain, nonatomic) MMFinderLiveLiveVoteItem *voteItem;
@property (retain, nonatomic) MMFinderLiveLiveVoteChoice *editingChoice;
@property (retain, nonatomic) MMFinderLiveLiveVoteChoice *deletingChoice;
@property (retain, nonatomic) NSIndexPath *indexPathToActivate;
@property (weak, nonatomic) MMFinderLiveCreateVoteHeaderTableViewCell *headerCell;
@property (retain, nonatomic) FixTitleColorButton *confirmButton;
@property (nonatomic) double keyboardHeight;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) UIView *sectionRoundView;
@property (copy, nonatomic) id /* block */ successBlock;
@property (weak, nonatomic) MMFinderLiveVoteDurationPickerView *durationPickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentCreateVoteInViewController:(id)a0 taskId:(id)a1 successBlock:(id /* block */)a2;
+ (id)createVoteViewControllerWithTaskId:(id)a0 successBlock:(id /* block */)a1;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutYAxisForConfirmButtonAndTableView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dealloc;
- (void)initNavBar;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (void)initConfirmButton;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)mmTableView:(id)a0 shouldPassHitTest:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)handleTableViewPan:(id)a0;
- (BOOL)handleItemShouldBeginEditing:(id)a0;
- (void)handleItemDeletingChanged:(id)a0 deleting:(BOOL)a1;
- (void)handleItemEndEditing:(id)a0;
- (void)deleteItem:(id)a0 correspondingIndexPath:(id)a1;
- (void)addNewChoice:(BOOL)a0;
- (void)createVoteHeaderCell:(id)a0 didUpdateQuestion:(id)a1;
- (void)createVoteHeaderCellWillBeginEditing:(id)a0;
- (void)createVoteHeaderCellDidClickSelectionTypeButton:(id)a0;
- (void)createVoteHeaderCellDidClickDurationLimitButton:(id)a0;
- (id)createRoundedSectionHeaderView;
- (void)updateConfirmButtonEnableState:(id)a0;
- (id)editingChoiceIndexPath;
- (id)indexPathForChoice:(id)a0;
- (void)resignAllActiveCells;
- (void)onHistoryButtonClick;
- (void)onBackButtonClicked:(id)a0;
- (void)onConfirmButtonClicked;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)liveVoteDurationPickerView:(id)a0 didSelectDuration:(unsigned long long)a1;
- (void).cxx_destruct;

@end
