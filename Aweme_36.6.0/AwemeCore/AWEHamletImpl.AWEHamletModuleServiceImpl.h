@interface AWEHamletImpl.AWEHamletModuleServiceImpl : HTSService <AWEHamletModuleService>

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)handleIMOnCall;
- (void)cleanAllCache;
- (void)loadResourceWithId:(id)a0 url:(id)a1 extension:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (unsigned long long)resourceSizeWithExpiredOnly:(BOOL)a0;
- (void)cleanWithExpiredOnly:(BOOL)a0;
- (void).cxx_destruct;
- (id)resourcePath;
- (id)init;

@end
