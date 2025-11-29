@class NSString, MMSpecialMsgSearchHelper;

@interface MMBaseSessionViewController : MMUIViewController <MMSpecialMsgSearchHelperDelegate, FTSDetailResultViewControllerDelegate> {
    MMSpecialMsgSearchHelper *m_specialMsgSearchHelper;
    unsigned int m_detailSearchResultCount;
    unsigned int m_resCount;
}

@property (nonatomic) BOOL isShowMsgSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initGetSpecialMsgSearchHelper;
- (void)initIsShowMsgSearch;
- (unsigned int)getMsgSearchBusinessType;
- (void)handleMsgUpdateSearchBar:(id)a0;
- (BOOL)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillPop:(BOOL)a0;
- (BOOL)shouldHideNavigationBar;
- (void)openKFContact:(id)a0;
- (BOOL)isKFContactMsgSearchBusinessType;
- (void)reportSearchButtonExposure;
- (void)msgSearchBarActiveForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchDidDismissForSpecialMsg;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (BOOL)checkClusterUserNameForSpecialMsg:(id)a0;
- (id)getChatContactForSpecialMsg;
- (void)startCustomizationSearchForSpecialMsg:(id)a0;
- (id)getCustomizationCellForSpecialMsgInTableView:(id)a0 result:(id)a1 cellIndex:(id)a2;
- (void)recombineCustomizationArrSearchResult:(id)a0 searchText:(id)a1;
- (void)recombineCustomizationKFSessionArrSearchResult:(id)a0 searchText:(id)a1;
- (id)getArrDetailSearchResult;
- (void)addMsgSessionFirstTitleCell:(id)a0;
- (void)returenRecombineCustomizationArrSearchResult:(id)a0 arrRecombineSearchResult:(id)a1;
- (void)didCustomizationSearchSelectForSpecialMsg:(id)a0 searchText:(id)a1;
- (void)didCustomizationKFContactSearchSelectForSpecialMsg:(id)a0 searchText:(id)a1;
- (void)didCustomizationSearchSelectForSpecialMsgReport:(id)a0;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSKFContactSearchResultChangedForDetail;
- (void)handleNavigationCancelItemClick;
- (void).cxx_destruct;

@end
