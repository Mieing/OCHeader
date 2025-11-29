@interface CJSwiftIAPStoreManager : NSObject {
    void /* unknown type, empty encoding */ iapServiceDelegate;
}

+ (void)setupServiceDelegate:(id)a0;
+ (void)startIAPWithParams:(id)a0 :(id)a1;
+ (void)prefetchProductsWithIdentifiers:(id)a0 :(id /* block */)a1;
+ (void)requestSK1ProductsWithIdentifiers:(id)a0 :(id /* block */)a1;
+ (id)makeSK1ProductModel:(id)a0;
+ (BOOL)isSK2Enable;
+ (BOOL)isSK2EnableSK1Observer;
+ (void)restoreWithUid:(id)a0 callBack:(id /* block */)a1;
+ (void)restoreWithUid:(id)a0 productIds:(id)a1 callBack:(id /* block */)a2;
+ (void)presentCodeRedemptionSheet;

- (void).cxx_destruct;
- (id)init;

@end
