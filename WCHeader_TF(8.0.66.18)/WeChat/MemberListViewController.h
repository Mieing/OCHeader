@class NSObject, NSString, WCDataSearcher, UIView, UILabel, MMTableView;
@protocol MemberDataLogicProtocol;

@interface MemberListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCSearchDelegate, WCDataSearchDelegate> {
    MMTableView *m_tableView;
    UIView *m_viewLabel;
    UILabel *m_countLabel;
    NSObject<MemberDataLogicProtocol> *m_memberData;
    WCDataSearcher *_searcher;
    BOOL m_needIndexBar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)isSeachActive;
- (void)updateCount;
- (void)initCountLabel:(id)a0;
- (void)initTableView;
- (void)initSearchBar;
- (void)reloadTable;
- (void)setMemberLogic:(id)a0;
- (void)showContactInfoView:(id)a0;
- (long long)getEditingStyleForIndexPath:(id)a0;
- (double)cellHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeResultCell:(id)a0 contact:(id)a1;
- (id)cellForHandleVoiceSearchViewTable:(id)a0 index:(id)a1;
- (id)cellForSearchViewTable:(id)a0 index:(id)a1;
- (double)heightForSearchViewTable:(id)a0;
- (void)didSearchViewTableSelect:(id)a0;
- (double)heightForFooterInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (id)viewForFooterInSection:(long long)a0 ForSearchViewTable:(id)a1;
- (BOOL)hasNoSearchResult;
- (void)doSearch:(id)a0 Pre:(BOOL)a1;
- (void)cancelSearch;
- (id)usrNameConvertToOContacts:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
