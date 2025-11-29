@class NSString;

@interface IESLiveChargeAPIImpl : NSObject <IESLiveChargeAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)m_diamondWithError:(id)a0 duration:(id)a1 withParameters:(id)a2;
+ (void)traceDiamondListWithParameters:(id)a0 response:(id)a1 error:(id)a2;
+ (void)traceDiamondBuyWithParameters:(id)a0 response:(id)a1 error:(id)a2;
+ (void)m_diamondBuyWithError:(id)a0 duration:(id)a1 withParameters:(id)a2;
+ (void)monitorPrivilegeTouchWithDuration:(double)a0 error:(id)a1;
+ (void)traceWalletInfoWithParameters:(id)a0 response:(id)a1 error:(id)a2;

- (void)fetchLiveChargeDiamondExtraDataWithCompletion:(id /* block */)a0;
- (void)fetchWalletRechargePageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLiveChargeDataWithEntrance:(long long)a0 fetchMoment:(long long)a1 chargeContext:(id)a2 tintTags:(id)a3 isNotCNY:(BOOL)a4 loadAllProducts:(BOOL)a5 balanceGap:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)diamondBuyWithParams:(id)a0 source:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)iapSignWithParams:(id)a0 completion:(id /* block */)a1;
- (void)checkFinalResultWithParams:(id)a0 completion:(id /* block */)a1;
- (void)fetchLiveWalletInfoFromSituation:(id)a0 secUserID:(id)a1 extraDict:(id)a2 withCompletion:(id /* block */)a3;
- (void)fetchPrivilegeTouchWithRoomId:(id)a0 completion:(id /* block */)a1;
- (void)p_prefetchImageData:(id)a0;

@end
