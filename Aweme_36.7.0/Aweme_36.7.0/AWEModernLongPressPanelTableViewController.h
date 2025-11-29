@class NSArray, NSString, AWEAwemeModel, AWELongPressPanelViewModel;

@interface AWEModernLongPressPanelTableViewController : UITableViewController <AWEModernLongPressReminderCellDelegate, AWELongPressPanelTableViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELongPressPanelViewModel *longPressVM;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL hasLoadData;
@property (nonatomic) BOOL didShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)panelDidShow;
- (void)dislikeButtonDidSelected;
- (void)likeButtonDidSelected;
- (void)reloadLongPressData:(id)a0 section:(id)a1;
- (void)setSectionCornreRadiusAndLines:(id)a0 forRowAtIndexPath:(id)a1;
- (void)updateFirstScreenVisibleStatusForVMAtIndexPath:(id)a0 groupModel:(id)a1;
- (void)reminderCellDidClickCloseButton:(id)a0;
- (void)loadDataWithAwemeModel:(id)a0;
- (void)trackCurrentVisibleCell;
- (void)trackCellDisplayForTableView:(id)a0 cell:(id)a1 unsafeRowAtIndexPath:(id)a2;
- (void)trackCellDisappearForTableView:(id)a0 cell:(id)a1 unsafeRowAtIndexPath:(id)a2;
- (BOOL)isCellDisplayOnScreen:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
