@class WCCreateNewGroupDemoViewController, NSString, NSArray, NSMutableSet, NSMutableArray, MMTableView;
@protocol WAShareGroupViewControllerDelegate;

@interface WAShareGroupViewController : MMUIViewController <WCCreateNewGroupDemoViewControllerDelegate, WCFacadeExt, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSMutableArray *m_arrAllLabelName;
    MMTableView *m_tableView;
    BOOL m_bShowDetail;
    WCCreateNewGroupDemoViewController *newGroup;
    NSMutableSet *m_contactSetImportFromGroup;
    NSMutableSet *m_contactSetNotImportFromGroup;
}

@property (nonatomic) unsigned int createTagEventId;
@property (retain, nonatomic) NSString *createTagName;
@property (weak, nonatomic) id<WAShareGroupViewControllerDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_title;
@property (nonatomic) long long m_privacy;
@property (retain, nonatomic) NSArray *m_cells;
@property (retain, nonatomic) NSArray *m_contactList;
@property (retain, nonatomic) NSMutableSet *m_labelNameSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCells:(id)a0 title:(id)a1;
- (id)initWithCells:(id)a0 title:(id)a1 privacy:(long long)a2 labelNameList:(id)a3 contactList:(id)a4;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (void)reloadAllTableView;
- (void)onWCGroupUpdated;
- (void)willShow;
- (id)loadAllTagNameList;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (int)getCellType:(id)a0;
- (BOOL)isSelected:(int)a0 postPrivacy:(long long)a1 indexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onDataChange;
- (void)onReturn;
- (void)onDone;
- (void)editContactLabels;
- (void)selectContacts;
- (void)onMultiSelectContactReturn:(id)a0 selectContactFromGroup:(id)a1;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onMultiSelectContactReturnForSns:(id)a0;
- (void)onMultiSelectContactCancelForSns;
- (void)onSaveTag;
- (void)onSkipSavingTag;
- (void)onTagNameEditViewControllerRetWithTagName:(id)a0;
- (void)onAllTagNameUpdate;
- (void)onAddContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)setContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)handleCreateToSetContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)handleCreateContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void).cxx_destruct;

@end
