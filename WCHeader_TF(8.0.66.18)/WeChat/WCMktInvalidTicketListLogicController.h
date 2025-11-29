@class WCMktDeleteInvalidTicketCgi, NSString, GetMktInvalidTicketHomePageResponse, WCMktInvalidTicketHomePageCgi;
@protocol WCMktInvalidTicketListLogicControllerDelegate;

@interface WCMktInvalidTicketListLogicController : NSObject <WCMktInvalidTicketHomePageCgiDelegate, WCMktDeleteInvalidTicketCgiDelegate, IWCCardPkgExt>

@property (weak, nonatomic) id<WCMktInvalidTicketListLogicControllerDelegate> delegate;
@property (retain, nonatomic) GetMktInvalidTicketHomePageResponse *mktInvalidTicketHomePageResponse;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktInvalidTicketHomePageCgi *invalidTicketHomePageCgi;
@property (nonatomic) BOOL bIsLoadingMoreMktInvalidTicket;
@property (retain, nonatomic) WCMktDeleteInvalidTicketCgi *deleteInvalidTicketCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadInvalidTicketHomePageCacheAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (id)getInvalidTicketList;
- (BOOL)hasMktInvalidTicketData;
- (BOOL)isMktInvalidTicketDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewRowCount;
- (id)getTicketElemDataWithIndexPath:(id)a0;
- (long long)getInvalidTicketItemIndexWithCardId:(id)a0;
- (void)handleInvalidTicketLoadingMore;
- (void)handleInvalidTicketListDeleteWithIndexPath:(id)a0;
- (void)handleInvalidTicketItemTagBtnClickWithData:(id)a0;
- (void)refreshHomePageDataFromSvr;
- (void)getInvalidTicketHomePageDataFromSvr;
- (void)getMoreInvalidTicketHomePageDataFromSvr;
- (void)getInvalidTicketHomePageDataFromSvrWithOffset:(unsigned int)a0;
- (void)onRetrieveLocation:(int)a0;
- (void)onGetInvalidTicketHomePageCgiResp:(id)a0;
- (void)sendDeleteInvalidTicketItemReuqest:(id)a0;
- (void)onGetDeleteInvalidTicketCgiResp:(id)a0;
- (void).cxx_destruct;

@end
