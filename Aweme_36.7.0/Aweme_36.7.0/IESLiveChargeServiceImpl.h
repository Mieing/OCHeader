@class NSString;

@interface IESLiveChargeServiceImpl : NSObject <IESLiveChargeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceModel;
- (void)commitChargeDurationTrackerMark:(id)a0;
- (void)buyProductWithIapPayModel:(id)a0 completion:(id /* block */)a1;
- (void)preorderBuyProductWithIapPayModel:(id)a0 completion:(id /* block */)a1;
- (void)startupChargeService;
- (void)checkLocalTransactionReceiptIfNeeded;
- (void)preFetchPaidLiveIAPProductWithID:(id)a0 completion:(id /* block */)a1;
- (void)buyWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)buyPayLiveProductWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)openDYYapDeskWithOrderParams:(id)a0 completion:(id /* block */)a1;
- (id)cjPayVersion;
- (BOOL)useSwiftChargeManager;

@end
