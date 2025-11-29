@interface _TtC6WeChatP33_587279BC3D27A760570B8677C5586F3B19WCCoinMidasDelegate : _TtCs12_SwiftObject <SwiftyMidas.SWMidasRuntimeDelegate, SwiftyMidas.SWMidasReprovideDelegate> {
    void /* unknown type, empty encoding */ api;
    void /* unknown type, empty encoding */ IGNORED_IAP_PRODUCT_PREFIXES;
}

- (BOOL)shouldProductIDIgnoredHandlingWithProductID:(id)a0;
- (void)trackEventDidInsertWithEvent:(id)a0;
- (void)logWithLevelName:(id)a0 moduleName:(id)a1 log:(id)a2;
- (id)userForProductReprovidingWithProductIDs:(id)a0;
- (void)productDidReprovideWithResultWithProductID:(id)a0 reprovideResp:(id)a1 isSuccess:(BOOL)a2 errorMsg:(id)a3 isFromRestored:(BOOL)a4;

@end
