@class NSArray, NSString, AWEAwemeModel, UIView, AWELongPressPanelViewModel, AWELongPressInteractiveCell;

@interface AWELongPressPanelTableViewController : UITableViewController <UITableViewDelegate, AWELongPressReminderCellDelegate, AWELongPressPanelTableViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWELongPressPanelViewModel *longPressVM;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL hasLoadData;
@property (nonatomic) BOOL dislikeButtonSelected;
@property (nonatomic) BOOL likeButtonSelected;
@property (nonatomic) double currentViewWidth;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) AWELongPressInteractiveCell *interactiveCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;

- (void)viewWillAppear:(BOOL)a0;
- (void)videoButtonTapped2:(id)a0;
- (void)videoButtonTapped:(id)a0;
- (void)VideoSpeed:(id)a0;
- (void)configureLivePhotoButtonForViewModel:(id)a0 actionType:(unsigned long long)a1;
- (void)configureSpeedControlForViewModel:(id)a0;
- (void)configureSubViewForViewModel:(id)a0 awemeModel:(id)a1 currentImageModel:(id)a2 actionType:(unsigned long long)a3;
- (id)aAWEPadBizUIAdapter;
- (void)dislikeButtonDidSelected;
- (void)likeButtonDidSelected;
- (id)aAWEPlayInteractionAdapter;
- (void)borderForView:(id)a0;
- (void)trackShareFriendShow;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (void)reloadLongPressData:(id)a0 section:(id)a1;
- (void)setSectionCornreRadiusAndLines:(id)a0 forRowAtIndexPath:(id)a1;
- (void)configCell:(id)a0 indexPath:(id)a1;
- (void)updateFirstScreenVisibleStatusForVMAtIndexPath:(id)a0 groupModel:(id)a1;
- (void)trackLongPressContentShow:(id)a0;
- (void)recordTrack:(id)a0;
- (void)reminderCellDidClickCloseButton:(id)a0;
- (void)loadDataWithAwemeModel:(id)a0;
- (void)updateUIWithView:(id)a0;
- (void)updateTableFooterView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setUpUI;

@end
