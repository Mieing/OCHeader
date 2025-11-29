@class NSMutableDictionary, NSDictionary, NSString, ContactsDataLogic, NSMutableArray, MMTableView;
@protocol OpenIMContactSelectViewDelegate;

@interface OpenIMContactSelectView : UIView <ContactsDataLogicDelegate, UITableViewDelegate, UITableViewDataSource> {
    ContactsDataLogic *m_contactsDataLogic;
    NSMutableArray *m_sectionKeyArray;
    NSDictionary *m_allOpenIMContactsDic;
    NSString *m_weWorkOpenImAcctType;
}

@property (weak, nonatomic) id<OpenIMContactSelectViewDelegate> m_delegate;
@property (nonatomic) BOOL m_bMultiSelect;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)initView;
- (void)initTableView;
- (void)dealloc;
- (unsigned long long)getTotalSelectCount;
- (void)removeSelect:(id)a0;
- (BOOL)isExisted:(id)a0;
- (BOOL)isSelected:(id)a0;
- (id)getCellImage:(id)a0;
- (void)addSelect:(id)a0;
- (BOOL)updateMultiSelect:(id)a0;
- (void)updateMultiSelectView;
- (void)reloadTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)makeCell:(id)a0 contact:(id)a1;
- (void)makeCell:(id)a0 contact:(id)a1 multiSelect:(BOOL)a2;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (void)makeCell:(id)a0 ForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)getTableView;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)cancelSearch;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (id)getDicSelectedContacts;
- (void)onContactAsynSearchSectionResultChanged:(id)a0 sectionTitles:(id)a1 sectionResults:(id)a2;
- (void).cxx_destruct;

@end
