@interface CJSwiftIAPStore.CJSwiftIAPProductRequestDelegate : NSObject <SKProductsRequestDelegate> {
    void /* unknown type, empty encoding */ callback;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ cjSwiftSK1Store;
}

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)productsRequest:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (void)requestDidFinish:(id)a0;

@end
