@class NSString, CContact, NSArray, NSMutableDictionary, NSMutableArray, SearchMatchTip;

@interface FTSMsgScopeView : FTSResultView <IFTSMessageMgrExt> {
    CContact *_session;
    NSArray *_arrTargetSessionMsgItems;
    CContact *_talkerContact;
    SearchMatchTip *_talkerMatchTip;
    NSString *_talkerQuery;
    NSMutableArray *_arrExpandStatus;
    NSMutableDictionary *m_dicWeakMedia;
    NSMutableDictionary *m_dicIndexItemCount;
}

@property (copy, nonatomic) NSString *taskKey;
@property (readonly, nonatomic) BOOL asCluster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithSearchBar:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithSearchPage:(id)a0;
- (void)initData;
- (void)configTagSearchLogicForSession:(id)a0 asCluster:(BOOL)a1 andSessionResult:(id)a2 andTalkerContact:(id)a3 andTalkerMatchTip:(id)a4 andTalkerQuery:(id)a5 andSearchText:(id)a6 bSessionFirst:(BOOL)a7;
- (BOOL)delaySearchImp:(id)a0;
- (void)delaySearch:(id)a0 slowMode:(BOOL)a1;
- (void)handleTextChanged:(id)a0 immediately:(BOOL)a1;
- (BOOL)searchBar:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)cancelSearch;
- (BOOL)isTalkerSearchEntry:(long long)a0;
- (BOOL)isDisplayTalkerSearchEntry;
- (unsigned long long)convertPageType;
- (BOOL)isSessionPage;
- (void)prePopHandle;
- (void)pop;
- (void)popForSubResultView:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)makeFinderCellWithTableView:(id)a0 finderMsgItem:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)needSeperatedFooterInSection:(long long)a0;
- (BOOL)needNoResultTableFooterView;
- (long long)getSectionCount;
- (long long)getRowCountForSection:(long long)a0;
- (BOOL)isUseSectionResult;
- (BOOL)isSearchRunning;
- (id)getSearchArray:(id)a0;
- (id)getSearchSectionArray:(id)a0;
- (BOOL)hasSearchDone:(id)a0;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)hideKeyboard;
- (void)selectMsgItem:(id)a0;
- (void)selectMsgItems:(id)a0 withInTalkerContact:(id)a1 andTalkerMatchTip:(id)a2;
- (void)selectMsgEntry:(id)a0;
- (void)openWeAppSessionView;
- (void)openWWKFSessionView;
- (void)onFTSRestrictSearchResultChanged:(id)a0;
- (BOOL)shouldDisplayMoreCellInSection:(long long)a0;
- (BOOL)isMoreCellAtIndexPath:(id)a0;
- (BOOL)isExpandingForSection:(long long)a0;
- (void)setExpandStatus:(BOOL)a0 forSection:(long long)a1;
- (id)ftsResultGetWCSearchContainerView;
- (void).cxx_destruct;

@end
