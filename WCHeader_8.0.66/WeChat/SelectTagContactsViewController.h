@class UIView, NSString, NSArray, NSMutableDictionary, NSDictionary, ContactTagData, ContactsAllSelectPanelView, MMTableView, UILabel;
@protocol SelectTagContactsViewControllerDelegate;

@interface SelectTagContactsViewController : MMUIViewController <ContactTagDetailViewControllerDelegate, ContactsAllSelectPanelViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    MMTableView *m_tableView;
    NSMutableDictionary *m_dicMultiSelect;
    UIView *m_viewLabel;
    UILabel *m_countLabel;
    BOOL _bNeedReload;
    BOOL _bNeedDismiss;
    unsigned long long m_existContactCountInTag;
    unsigned long long m_currentSelectTimes;
    ContactsAllSelectPanelView *m_allSelectPanel;
}

@property (weak, nonatomic) id<SelectTagContactsViewControllerDelegate> m_delegate;
@property (nonatomic) unsigned long long m_memberCountLimit;
@property (retain, nonatomic) NSString *m_rightBarButtonTitle;
@property (nonatomic) int m_FromWhichScene;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSArray *m_arrTagContacts;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) ContactTagData *m_contactTagData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)sortTagContacts;
- (void)initData;
- (void)calculateExistCount;
- (void)initView;
- (void)initTitleArea;
- (void)tryInitAllSelectPanel;
- (void)initAllSelectPanel;
- (void)updateRightBarBtn;
- (void)onManageTag:(id)a0;
- (void)onDismiss:(id)a0;
- (void)onCancel:(id)a0;
- (void)onDone:(id)a0;
- (void)initTableView;
- (void)makeEmptyTipsView;
- (BOOL)isExisted:(id)a0;
- (BOOL)isSelected:(id)a0;
- (id)getCellImage:(id)a0;
- (void)addSelect:(id)a0;
- (void)removeSelect:(id)a0;
- (BOOL)updateMultiSelect:(id)a0 contact:(id)a1 tableView:(id)a2 allSelectMode:(BOOL)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)makeTagCell:(id)a0 row:(unsigned long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onDeleteContactTagSuccess:(id)a0;
- (BOOL)checkIfAllMemberSelected;
- (void)onSelectAll;
- (void)onDeselectAll;
- (void).cxx_destruct;

@end
