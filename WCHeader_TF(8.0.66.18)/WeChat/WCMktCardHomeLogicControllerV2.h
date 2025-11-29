@class NSString, WCMktCardHomePageV2Cgi, WCMktRemoveCardInRecentListCgi, GetMktCardHomePageV2Response;
@protocol WCMktCardHomeLogicControllerV2Delegate;

@interface WCMktCardHomeLogicControllerV2 : NSObject <WCMktCardHomePageV2CgiDelegate, WCMktRemoveCardInRecentListCgiDelegate, WCNewCardDetailViewControllerDelegate, IWCCardPkgExt>

@property (weak, nonatomic) id<WCMktCardHomeLogicControllerV2Delegate> delegate;
@property (retain, nonatomic) GetMktCardHomePageV2Response *mktCardHomePageResponse;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktCardHomePageV2Cgi *homePageCgi;
@property (retain, nonatomic) WCMktRemoveCardInRecentListCgi *removeCardInRecentListCgi;
@property (retain, nonatomic) NSString *deletingCardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (BOOL)isRecentListCardDataAllLoad;
- (id)getHomePageFaqItem;
- (id)getHomePageTopCellGroupData;
- (id)getHomePageRecentCardListData;
- (BOOL)hasRespData;
- (BOOL)hasTopCellListData;
- (BOOL)hasRecentListData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)a0;
- (BOOL)isTopCellSection:(long long)a0;
- (BOOL)isTopCellIndexPath:(id)a0;
- (id)getRecentListHeaderTitle;
- (id)getRecentListEmptyTips;
- (BOOL)isLastTopCellItemWithIndexPath:(id)a0;
- (id)getHomePageTopCellElemWithIndexPath:(id)a0;
- (id)getHomePageRecentCellElemWithIndexPath:(id)a0;
- (void)handleRemoveRecentListCellWithIndexPath:(id)a0;
- (void)refreshHomePageDataFromSvr;
- (void)handleHomePageDataLoadingMore;
- (void)handleFaqItemClick;
- (void)handleHomePageElemCellClickWithIndexPath:(id)a0;
- (void)handleTopCellSectionClickWithIndexPath:(id)a0;
- (void)handleRecentCardSectionClickWithIndexPath:(id)a0;
- (void)handleTinyAppOpenWithAppInfo:(id)a0;
- (void)handleH5OpenWithUrl:(id)a0;
- (void)removeRecentListDataWithUserCardId:(id)a0;
- (void)getMoreHomePageDataFromSvr;
- (void)getHomePageDataFromSvrWithOffset:(double)a0;
- (void)onGetWCMktCardHomePageV2CgiResp:(id)a0;
- (void)removeRecentListCardWithData:(id)a0;
- (void)onGetMktRemoveCardInRecentListCgiResp:(id)a0;
- (void)onDeleteCard:(id)a0;
- (void)onDeleteCardIDList:(id)a0 ErrCode:(int)a1;
- (void)updateRecentListAfterCardDataChange;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0;
- (void).cxx_destruct;

@end
