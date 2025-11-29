@interface BDSHResourceLoader : NSObject

+ (void)loadTemplateResourceWithUrl:(id)a0 completion:(id /* block */)a1;
+ (void)updateGeckoResource:(id)a0 completion:(id /* block */)a1;
+ (void)loadTemplateResourceWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCDNResource:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLocalResource:(id)a0 fallbackCDN:(BOOL)a1 completion:(id /* block */)a2;

@end
