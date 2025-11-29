@interface SwiftyMidas.DianaManager : NSObject <SKPaymentQueueDelegate> {
    void /* unknown type, empty encoding */ previousSign;
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ logDelegate;
    void /* unknown type, empty encoding */ cachedSensitive;
    void /* unknown type, empty encoding */ installedFlags;
}

- (BOOL)paymentQueue:(id)a0 shouldContinueTransaction:(id)a1 inStorefront:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
