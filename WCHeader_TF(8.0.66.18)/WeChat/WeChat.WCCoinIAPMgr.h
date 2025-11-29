@class PrepareWecoinRechargeResponse, NSString, NSSet, NSData, PrepareWecoinSubscriptionResponse, MidasSdkInfo, _TtC6WeChat18WCCoinIAPPayResult;

@interface WeChat.WCCoinIAPMgr : MMUserService <MMServiceProtocol> {
    void /* unknown type, empty encoding */ api;
    void /* unknown type, empty encoding */ midasDelegateInstance;
    void /* unknown type, empty encoding */ prefetchProductIds;
}

+ (void)bindingPaymentMethodWithPinningID:(NSString *)a0 completionHandler:(void (^)(long long))a1;

- (id)getSDKVersion;
- (void)preloadWithCompletionHandler:(void (^)(void))a0;
- (void)getProductInfoWithProductIds:(NSSet *)a0 completionHandler:(void (^)(NSSet *))a1;
- (void)prefetchProductWithCompletionHandler:(void (^)(void))a0;
- (id)currencyCode;
- (id)getProductInfo:(id)a0;
- (void)getSubscriptionProductStatusWithProductId:(NSString *)a0 completionHandler:(void (^)(NSData *))a1;
- (void)purchaseWithInfo:(PrepareWecoinRechargeResponse *)a0 completionHandler:(void (^)(_TtC6WeChat18WCCoinIAPPayResult *))a1;
- (void)purchaseWithSubscriptionResp:(PrepareWecoinSubscriptionResponse *)a0 completionHandler:(void (^)(_TtC6WeChat18WCCoinIAPPayResult *))a1;
- (void)purchaseWithUrlParams:(NSString *)a0 sdkInfo:(MidasSdkInfo *)a1 completionHandler:(void (^)(_TtC6WeChat18WCCoinIAPPayResult *))a2;
- (void)onServiceInit;
- (id)init;
- (void).cxx_destruct;

@end
