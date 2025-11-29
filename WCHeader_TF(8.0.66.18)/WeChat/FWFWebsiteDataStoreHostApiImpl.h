@class FWFInstanceManager;

@interface FWFWebsiteDataStoreHostApiImpl : NSObject <FWFWKWebsiteDataStoreHostApi>

@property (weak, nonatomic) FWFInstanceManager *instanceManager;

- (id)initWithInstanceManager:(id)a0;
- (id)websiteDataStoreForIdentifier:(long long)a0;
- (void)createFromWebViewConfigurationWithIdentifier:(long long)a0 configurationIdentifier:(long long)a1 error:(id *)a2;
- (void)createDefaultDataStoreWithIdentifier:(long long)a0 error:(id *)a1;
- (void)removeDataFromDataStoreWithIdentifier:(long long)a0 ofTypes:(id)a1 modifiedSince:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
