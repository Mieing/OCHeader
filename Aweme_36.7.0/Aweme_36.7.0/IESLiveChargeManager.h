@class NSDictionary, NSArray, IESLiveChargeServiceModel;
@protocol IESLiveRoomService, IESLiveChargeMonitorService, IESLiveRechargeHandleService;

@interface IESLiveChargeManager : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveRechargeHandleService> rechargeService;
@property (copy, nonatomic) NSDictionary *orderInfo;
@property (retain, nonatomic) id<IESLiveChargeMonitorService> chargeMonitor;
@property (retain, nonatomic) NSArray *checkResultTimes;
@property (nonatomic) BOOL systemIapPanelShown;
@property (nonatomic) BOOL isColdStartFirstCharge;
@property (retain, nonatomic) IESLiveChargeServiceModel *serviceModel;

+ (id)defaultManager;

- (id)attachingDIContext;
- (void)addAppActiveStateObserver;
- (void)checkOrderWithOrderInfo:(id)a0 completion:(id /* block */)a1;
- (void)updateBalanceWithCompletion:(id /* block */)a0;
- (void)startupService;
- (id)getCountryCode;
- (void)commitChargeDurationTrackerMark:(id)a0;
- (void)buyProductWithIapPayModel:(id)a0 completion:(id /* block */)a1;
- (void)preorderBuyProductWithIapPayModel:(id)a0 completion:(id /* block */)a1;
- (void)checkLocalTransactionReceiptIfNeeded;
- (void)preFetchPaidLiveIAPProductWithID:(id)a0 completion:(id /* block */)a1;
- (void)buyWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)openDYYapDeskWithOrderParams:(id)a0 completion:(id /* block */)a1;
- (id)cjPayVersion;
- (void)realBuyProductWithIAPPayModel:(id)a0 product:(id)a1 isPreorder:(BOOL)a2 completion:(id /* block */)a3;
- (void)getSKProductForBuyWithModel:(id)a0 completion:(id /* block */)a1;
- (id)requestPageStringWithRequestPage:(unsigned long long)a0;
- (void)resetStatusWhileChargeEnd;
- (void)prepareBuyProductWithIAPPayModel:(id)a0 completion:(id /* block */)a1;
- (void)prefetchSKProduct:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)cjPayWithIAPPayModel:(id)a0 diamondBuyResult:(id)a1 completion:(id /* block */)a2;
- (id)getStoreCurrencyWithProduct:(id)a0;
- (void)handlePreorderWithIAPPayModel:(id)a0 diamondBuyResult:(id)a1 completion:(id /* block */)a2;
- (void)diamondBuyWithChargeModel:(id)a0 storeCurrency:(id)a1 source:(id)a2 extraParams:(id)a3 isPreorder:(BOOL)a4 completion:(id /* block */)a5;
- (id)rechargeChannel;
- (void)p_checkChargeResultWithParams:(id)a0 pollingCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (id)init;

@end
