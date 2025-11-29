@class NSString, BDPUniqueID, NSMutableArray;
@protocol BDPPaymentPluginDelegate;

@interface BDPPluginPayment : BDPBridgeInstancePlugin <BDPNewPaymentSubscribeDelegate> {
    BOOL _isWXH5Paying;
    NSMutableArray *_WXH5PaymentUnfinishedBlkArr;
}

@property (retain, nonatomic) id<BDPPaymentPluginDelegate> paymentPlugin;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadOrderInfoWithAppID:(id)a0;
+ (id)_getWXH5PaymentScheme;

- (void)enterForeground:(id)a0;
- (void)setupObserver;
- (void)bdp_payContainerEventWithParam:(id)a0;
- (void)_openWXPaymentWithUrl:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_openAliPaymentWithUrl:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requestPaymentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requestWXH5PaymentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requestSchemaPaymentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requestLynxPaymentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openLxModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateLxModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)destroyLxModalWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendLxModalEventWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)industryUniversalCallWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
