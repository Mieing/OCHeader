@interface SwiftyMidas.MiddlewareReprovideDelegate : _TtCs12_SwiftObject <SwiftyMidas.SWMidasReprovideDelegate> {
    void /* unknown type, empty encoding */ callbacks;
    void /* unknown type, empty encoding */ logPrefix;
    void /* unknown type, empty encoding */ outerDelegate;
}

- (BOOL)productShouldReprovideWithProductID:(id)a0;
- (BOOL)productShouldReprovideAutomaticallyWithProductID:(id)a0;
- (id)userForProductReprovidingWithProductIDs:(id)a0;
- (void)productWillReprovideWithProductID:(id)a0;
- (void)productDidReprovideWithResultWithProductID:(id)a0 reprovideResp:(id)a1 isSuccess:(BOOL)a2 errorMsg:(id)a3 isFromRestored:(BOOL)a4;

@end
