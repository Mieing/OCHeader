@class MMTableView, NSString, NSMutableArray, WCScheduleLogicController;

@interface WCScheduleManageViewControllerV2 : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, IStrangerContactMgrExt, IFavoritesExt, WCScheduleLogicControllerDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *todoItemArr;
@property (retain, nonatomic) WCScheduleLogicController *scheduleRemindLogic;
@property (nonatomic) long long jumpToMsgid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithJumpToMsgid:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)tryScrollTargetCell;
- (void)initData;
- (BOOL)retrieveScheduleData;
- (void)initView;
- (void)removeSchedule:(id)a0;
- (void)initNavigationBar;
- (void)updateNavigationItems;
- (void)onReturn;
- (void)getContactsFromServerIfNecessary;
- (BOOL)isItem:(id)a0 EqualToItem:(id)a1;
- (unsigned long long)getCellTypeWithIndexPath:(id)a0;
- (void)makeCell:(id)a0 indexPath:(id)a1;
- (void)makeNoRecentCell:(id)a0;
- (void)makeScheduleItemCell:(id)a0 item:(id)a1 indexPath:(id)a2;
- (id)getOperateButton:(id)a0;
- (double)getCellHeightAtIndexPath:(id)a0;
- (void)onModifyButtonClicked:(id)a0;
- (void)onDetailButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)showDetailWithWCScheduleItem:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)OnUpdateItems:(id)a0;
- (void)onWCScheduleItem:(id)a0 SetSuccess:(BOOL)a1 ErrMsg:(id)a2;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleItem:(id)a0 cancelSuccess:(BOOL)a1 errMsg:(id)a2;
- (void).cxx_destruct;

@end
