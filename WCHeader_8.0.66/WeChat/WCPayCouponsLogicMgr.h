@class WCPayTradeFavInfo, NSMutableDictionary, NSString;

@interface WCPayCouponsLogicMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCPayTradeFavInfo *wcPayTradeFavInfo;
@property (retain, nonatomic) NSMutableDictionary *dicFavorItemInComponseInfo;
@property (nonatomic) BOOL bIsUserClickConfirmInCouponList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)selectComposeInfo:(id)a0;
- (void)resetTradeFavInfo:(id)a0;
- (id)resetComposeInfo:(id)a0;
- (id)autoAdjustCouponsInfoForSelectedCard:(id)a0;
- (void)clearSelectedBankFavAndReCalculateBankFavorInfo;
- (id)getWCPayTradeFavInfo;
- (id)getBankFavorItemAndCouponsInfo;
- (BOOL)isFreePaymentTradeFavInfo;
- (void)calcDefaultComposeInfoForSelectCardIfNeed:(id)a0;
- (void)setCouponsListViewUserHasClickConfirm:(BOOL)a0;
- (unsigned long long)getSelectedFavComposeInfoInvariableFavAmount;
- (unsigned long long)getSelectedFavComposeInfoShowFavAmount;
- (BOOL)shouldShowFavEnteranceWithBindCardArray:(id)a0;
- (BOOL)shouldShowMoreFavEnteranceWithBindCardArray:(id)a0;
- (id)selectTradeFavItem:(id)a0;
- (id)deselectTradeFavItem:(id)a0;
- (id)getFilterTradeFavListWithBindCardArray:(id)a0;
- (id)getBindSerialBankFavorDescListWithBindSerial:(id)a0;
- (id)getNewBindCardFavorDescList;
- (BOOL)shouldShowBankFavorRedDotWithCardList:(id)a0 currentBindSerial:(id)a1;
- (BOOL)hasShowBankFavRedDotInOrderConfirmView;
- (void)setBankFavReddotHasShow;
- (id)getOrderConfirmViewShowBindSerialBankFavDescListWithBindSerial:(id)a0;
- (void).cxx_destruct;

@end
