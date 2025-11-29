@class NSString, NSDictionary, NSArray, IESLiveChargeServiceModel, _TtC18IESLiveRevenueImpl25IESLiveChargeSwiftManager;
@protocol IESLiveRoomService, IESLiveChargeMonitorService, IESLiveRechargeHandleService;

@interface IESLiveRevenueImpl.IESLiveChargeSwiftManager : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_room;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rechargeService;
    void /* function */ orderInfo;
}

@property (class, nonatomic, readonly) NSString *kIESLiveIAPBusinessIdentifier;
@property (class, nonatomic, readonly) NSString *kIESLiveStoreCurrencyKVIdentifier;
@property (class, nonatomic, readonly) NSString *kIESLivePredictOrderTimeStamp;
@property (class, nonatomic, readonly) NSString *kIESLiveChargePreorderErrorDomain;
@property (class, nonatomic, readonly) _TtC18IESLiveRevenueImpl25IESLiveChargeSwiftManager *shared;

@property (nonatomic, retain) id<IESLiveRoomService> room;
@property (nonatomic, retain) id<IESLiveRechargeHandleService> rechargeService;
@property (nonatomic, copy) NSDictionary *orderInfo;
@property (nonatomic, retain) id<IESLiveChargeMonitorService> chargeMonitor;
@property (nonatomic, readonly) NSArray *checkResultTimes;
@property (nonatomic, retain) IESLiveChargeServiceModel *serviceModel;

- (void)buyProductWith:(id)a0 completion:(id /* block */)a1;
- (void)preorderBuyProductWith:(id)a0 completion:(id /* block */)a1;
- (void)handlePreorderWith:(id)a0 diamondBuyResult:(id)a1 completion:(id /* block */)a2;
- (void)checkOrderWithOrderInfo:(id)a0 completion:(id /* block */)a1;
- (void)p_checkChargeResultWith:(id)a0 pollingCount:(long long)a1 completion:(id /* block */)a2;
- (void)updateBalanceWithCompletion:(id /* block */)a0;
- (void)startupService;
- (void)prefetchSKProductWithIapID:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (id)encodeStringWithDict:(id)a0;
- (id)getCountryCode;
- (id)getStoreCurrencyWith:(id)a0;
- (void)commitChargeDurationTrackerMark:(id)a0;
- (void)checkLocalTransactionReceiptIfNeeded;
- (void)preFetchPaidLiveIAPProductWithID:(id)a0 completion:(id /* block */)a1;
- (void)buyWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)openDYYapDeskWithOrderParams:(id)a0 completion:(id /* block */)a1;
- (id)cjPayVersion;
- (void).cxx_destruct;
- (id)init;

@end
