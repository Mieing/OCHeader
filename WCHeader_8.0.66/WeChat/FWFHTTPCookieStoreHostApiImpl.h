@class FWFInstanceManager;

@interface FWFHTTPCookieStoreHostApiImpl : NSObject <FWFWKHttpCookieStoreHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)HTTPCookieStoreForIdentifier:(long long)a0;
- (void)createFromWebsiteDataStoreWithIdentifier:(long long)a0 dataStoreIdentifier:(long long)a1 error:(id *)a2;
- (void)setCookieForStoreWithIdentifier:(long long)a0 cookie:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
