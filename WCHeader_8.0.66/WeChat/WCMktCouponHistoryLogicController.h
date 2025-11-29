@class WCMktCouponHistoryPageCgi, NSString, GetCouponAndGiftHistoryResponse, WCMktDeleteCouponInInvalidlistCgi;
@protocol WCMktCouponHistoryLogicControllerDelegate;

@interface WCMktCouponHistoryLogicController : NSObject <WCMktCouponHistoryPageCgiDelegate, WCMktDeleteCouponInInvalidlistCgiDelegate>

@property (weak, nonatomic) id<WCMktCouponHistoryLogicControllerDelegate> delegate;
@property (retain, nonatomic) GetCouponAndGiftHistoryResponse *mktCouponHistoryHomePageResp;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktCouponHistoryPageCgi *historyHomePageCgi;
@property (retain, nonatomic) WCMktDeleteCouponInInvalidlistCgi *deleteCardCgi;
@property (nonatomic) BOOL bNeedUpdateDataAfterViewControllerWillApper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadHistoryPageCacheDataAndRefreshFromSvr;
- (void)saveCouponHistoryHomePageDataToFile;
- (BOOL)hasMktCouponHistoryData;
- (BOOL)isMktCouponHistoryDataAllLoad;
- (BOOL)hasRespData;
- (id)getHistoryPageTitle;
- (long long)getTableViewRowCount;
- (id)getCouponHistoryDataWithIndexPath:(id)a0;
- (id)getRightButtonList;
- (id)getHistoryItemList;
- (void)handleH5OpenWithUrl:(id)a0 needUpdateHomePage:(BOOL)a1;
- (void)handleTinyAppOpenWithAppInfo:(id)a0 needUpdateHomePage:(BOOL)a1;
- (long long)getElemDataRowIndexInCardListWithCardId:(id)a0;
- (void)updateHomePageDataAfrerViewControllerWillAppearIfNeed;
- (void)refreshHomePageDataFromSvr;
- (void)handleCouponHistoryLoadingMore;
- (void)getCoponHistoryPageDataFromSvrWithOffset:(unsigned long long)a0;
- (void)onGetCouponHistoryPageCgiResp:(id)a0;
- (void)handleClickCouponHistoryItemWithIndexPath:(id)a0;
- (void)handleDeleteCouponHistoryItemWithIndexPath:(id)a0;
- (void)onGetMktDeleteCouopnInInvalidlistCgiResp:(id)a0;
- (void)handleDeleteCardSuccWithCardId:(id)a0;
- (void)handleClickRightBtnWithItemData:(id)a0;
- (void).cxx_destruct;

@end
