@interface IESLiveRevenueImpl.IESLiveChargeAPISwiftImpl : NSObject <IESLiveChargeAPI>

- (void)fetchLiveChargeDiamondExtraDataWithCompletion:(id /* block */)a0;
- (void)fetchWalletRechargePageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLiveChargeDataWithEntrance:(long long)a0 fetchMoment:(long long)a1 chargeContext:(id)a2 tintTags:(id)a3 isNotCNY:(BOOL)a4 loadAllProducts:(BOOL)a5 balanceGap:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)diamondBuyWithParams:(id)a0 source:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)iapSignWithParams:(id)a0 completion:(id /* block */)a1;
- (void)checkFinalResultWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLiveWalletInfoFromSituation:(id)a0 secUserID:(id)a1 extraDict:(id)a2 withCompletion:(id /* block */)a3;
- (void)fetchPrivilegeTouchWithRoomId:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
