@interface SwiftyMidas.AppleProductFetcher : NSObject <SKProductsRequestDelegate> {
    void /* unknown type, empty encoding */ usingStoreKit2;
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ productRequest;
    void /* unknown type, empty encoding */ completion;
}

- (void)productsRequest:(id)a0 didReceiveResponse:(id)a1;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
