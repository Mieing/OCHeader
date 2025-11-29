@class NSString, WCMktTicketHomePageCgi, WCMktDeleteTicketCgi, GetMktTicketHomePageResponse, NSMutableArray;
@protocol WCMktTicketListLogicControllerDelegate;

@interface WCMktTicketListLogicController : NSObject <WCMktTicketHomePageCgiDelegate, IWCCardPkgExt, WCMktDeleteTicketCgiDelegate>

@property (weak, nonatomic) id<WCMktTicketListLogicControllerDelegate> delegate;
@property (retain, nonatomic) GetMktTicketHomePageResponse *mktTicketHomePageResponse;
@property (retain, nonatomic) NSMutableArray *sectionArray;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktTicketHomePageCgi *ticketHomePageCgi;
@property (nonatomic) BOOL bIsLoadingMoreMktTicketList;
@property (retain, nonatomic) WCMktDeleteTicketCgi *deleteTicketCgi;
@property (retain, nonatomic) NSString *deletingCardID;
@property (nonatomic) BOOL bNeedUpdateDataAfterViewControllerWillApper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadTicketHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (id)getTicketJumpList;
- (id)getTicketTypeList;
- (id)getLicenseTypeList;
- (id)getMedicateCardBanner;
- (BOOL)hasMedicateCardBanner;
- (BOOL)hasMktTicketData;
- (BOOL)isMktTicketDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)a0;
- (id)getSectionNameWithSection:(long long)a0;
- (BOOL)isTicketJumpTypeDataWithIndexPath:(id)a0;
- (id)getTicketJumpElemDataWithIndexPath:(id)a0;
- (id)getTicketElemDataWithIndexPath:(id)a0;
- (long long)getTicketJumpiListCount;
- (BOOL)isMedicareCardBannerWithIndexPath:(id)a0;
- (id)getLastItemIndexPath;
- (void)handleTicketHomePageDataLoadingMore;
- (void)handleTicketListDeleteWithIndexPath:(id)a0;
- (void)handleTicketListSelectJumpTypeDataWithJumpElemData:(id)a0;
- (void)handleTicketItemTagBtnClickWithData:(id)a0;
- (void)handleTicketDetailDeleteCardWithCardId:(id)a0;
- (void)handleDeleteCardWithCardData:(id)a0;
- (void)onDeleteCardIDList:(id)a0 ErrCode:(int)a1;
- (void)refreshHomePageDataFromSvr;
- (void)updateHomePageDataAfterViewControllerWillAppearIfNeed;
- (void)handleMedicateBannerClick;
- (long long)getTicketListSectionIndexWithSectionName:(id)a0;
- (long long)getElemDataRowIndexInTicketTypeListWithCardId:(id)a0;
- (long long)getElemDataRowIndexInLicenseTypeListWithCardId:(id)a0;
- (id)getElemDataIndexPathWithUserCardId:(id)a0;
- (void)handleTinyAppOpenWithAppInfo:(id)a0;
- (void)getTicketHomePageDataFromSvr;
- (void)getMoreTicketHomePageDataFromSvr;
- (void)getTicketHomePageDataFromSvrWithOffset:(unsigned int)a0;
- (void)onRetrieveLocation:(int)a0;
- (void)onGetMktTicketHomePageCgiResp:(id)a0;
- (void)sendDeleteTicketItemRequest:(id)a0;
- (void)onGetDeleteTicketCgiResp:(id)a0;
- (void).cxx_destruct;

@end
