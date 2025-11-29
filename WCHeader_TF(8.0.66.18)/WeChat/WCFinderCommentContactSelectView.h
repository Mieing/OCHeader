@class NSArray, WCContactSelectFixedSearcher, NSString, UIView;

@interface WCFinderCommentContactSelectView : ContactSelectView <WCContactSelectFixedSearcherDelegate>

@property (retain, nonatomic) NSArray *latestCommentMentionedContacts;
@property (retain, nonatomic) WCContactSelectFixedSearcher *contactSearcher;
@property (retain, nonatomic) UIView *searchContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData:(unsigned int)a0;
- (void)reloadLatestCommentMentionedContacts;
- (void)resignResponder;
- (void)initSearchBar;
- (void)updateSearchResult:(id)a0;
- (void)updateSearchingState:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)mmtableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)mmcurrentIndexForTableView:(id)a0;
- (BOOL)hasLastestContact;
- (void)liveContactBeginSearch;
- (void)liveContactDoSearch:(id)a0 Pre:(BOOL)a1;
- (void)liveContactCancelSearch;
- (id)liveContactCellForSearchViewTable:(id)a0 index:(id)a1;
- (void)liveContactDidSearchViewTableSelect:(id)a0;
- (void).cxx_destruct;

@end
