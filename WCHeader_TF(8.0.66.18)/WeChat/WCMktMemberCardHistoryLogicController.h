@class NSString, WCMktMemberCardHistoryPageCgi, GetMemberCardHistoryResponse, WCMktDeleteInvalidTicketCgi;
@protocol WCMktMemberCardHistoryLogicControllerDelegate;

@interface WCMktMemberCardHistoryLogicController : NSObject <WCMktMemberCardHistoryPageCgiDelegate, WCMktDeleteInvalidTicketCgiDelegate>

@property (weak, nonatomic) id<WCMktMemberCardHistoryLogicControllerDelegate> delegate;
@property (retain, nonatomic) GetMemberCardHistoryResponse *mktMemberCardHistoryHomePageResp;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktMemberCardHistoryPageCgi *historyHomePageCgi;
@property (retain, nonatomic) WCMktDeleteInvalidTicketCgi *deleteCardCgi;
@property (nonatomic) BOOL bNeedUpdateDataAfterViewControllerWillApper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
- (void)saveMemberCardHistoryHomePageDataToFile;
- (BOOL)hasMktMemberCardHistoryData;
- (BOOL)isMktMemberCardHistoryDataAllLoad;
- (BOOL)hasRespData;
- (id)getHistoryPageTitle;
- (long long)getTableViewRowCount;
- (id)getMemberCardHistoryDataWithIndexPath:(id)a0;
- (id)getRightButtonList;
- (id)getHistoryItemList;
- (void)handleH5OpenWithUrl:(id)a0 needUpdateHomePage:(BOOL)a1;
- (void)handleTinyAppOpenWithAppInfo:(id)a0 needUpdateHomePage:(BOOL)a1;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)a0;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)refreshHomePageDataFromSvr;
- (void)handleMemberCardHistoryLoadingMore;
- (void)getMemberCardHistoryPageDataFromSvrWithOffset:(unsigned long long)a0;
- (void)onGetMemberCardHistoryPageCgiResp:(id)a0;
- (void)handleClickMemberCardHistoryItemWithIndexPath:(id)a0;
- (void)handleDeleteMemberCardHistoryItemWithIndexPath:(id)a0;
- (void)onGetDeleteInvalidTicketCgiResp:(id)a0;
- (void)handleDeleteCardSuccWithCardId:(id)a0;
- (void)handleClickRightBtnWithItemData:(id)a0;
- (void).cxx_destruct;

@end
