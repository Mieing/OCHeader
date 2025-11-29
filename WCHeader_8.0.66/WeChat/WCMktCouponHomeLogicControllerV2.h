@class GetCouponAndGiftListResponse, WCMktDeleteCouponCgi, NSString, WCMktCouponHomePageV2Cgi, NSMutableArray;
@protocol WCMktCouponHomeLogicControllerV2Delegate;

@interface WCMktCouponHomeLogicControllerV2 : NSObject <WCMktCouponHomePageV2CgiDelegate, IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCMktDeleteCouponCgiDelegate>

@property (weak, nonatomic) id<WCMktCouponHomeLogicControllerV2Delegate> delegate;
@property (retain, nonatomic) GetCouponAndGiftListResponse *mktCouponHomePageResponse;
@property (retain, nonatomic) NSMutableArray *sectionArray;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktCouponHomePageV2Cgi *couponHomePageCgi;
@property (retain, nonatomic) WCMktDeleteCouponCgi *deleteCardCgi;
@property (retain, nonatomic) NSString *deletingCardID;
@property (nonatomic) BOOL bNeedUpdateDataAfterViewControllerWillApper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadCouponHomePageCacheDataAndRefreshFromSvr;
- (void)saveCouponHomePageDataToFile;
- (BOOL)hasMktCouponData;
- (BOOL)isMktCouponDataAllLoad;
- (BOOL)hasRespData;
- (long long)getTableViewSectionCount;
- (long long)getTableViewRowCountInSection:(long long)a0;
- (id)getSectionNameWithSection:(long long)a0;
- (id)getSectionDisplayNameWithSection:(long long)a0;
- (id)getCouponElemDataWithIndexPath:(id)a0;
- (id)getHomePageTitle;
- (id)getRightButtonList;
- (id)getGiftItemsList;
- (id)getCouponItemsList;
- (long long)getSectionIndexWithSectionName:(id)a0;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)a0;
- (long long)getElemDataRowIndexInCouponListWithCardId:(id)a0;
- (id)getElemDataIndexPathWithUserCardId:(id)a0;
- (void)handleH5OpenWithUrl:(id)a0 needUpdateHomePage:(BOOL)a1;
- (void)handleTinyAppOpenWithAppInfo:(id)a0 needUpdateHomePage:(BOOL)a1;
- (void)refreshHomePageFromSvr;
- (void)handleCouponHomePageDataLoadingMore;
- (void)getCoponHomePageDataFromSvrWithOffset:(unsigned long long)a0;
- (void)onGetWCMktCouponHomePageV2CgiResp:(id)a0;
- (void)handleCouponListDidSelectRowAtIndexPath:(id)a0;
- (void)handleCouponListDeleteWithIndexPath:(id)a0;
- (void)onGetDeleteCouponCgiResp:(id)a0;
- (void)HandleCouponListDetailDeleteCardWithCardId:(id)a0;
- (void)handleDeleteCardSuccWithCardId:(id)a0;
- (void)handleDeleteCardWithCardData:(id)a0;
- (void)onDeleteCardIDList:(id)a0 ErrCode:(int)a1;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)handleClickRightBtnWithItemData:(id)a0;
- (void)handleCardDataNeedDeleteWithCardData:(id)a0;
- (void)onDeleteCard:(id)a0;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)onUseCard:(id)a0;
- (void).cxx_destruct;

@end
