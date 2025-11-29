@interface IESForestGeckoFetcher : IESForestBaseFetcher

+ (id)fetcherName;
+ (long long)typeFromGeckoResFrom:(long long)a0;
+ (void)assignGeckoResError:(id)a0 request:(id)a1;
+ (id)convertGeckoResError:(id)a0 hasAboutWKContent:(BOOL)a1;
+ (id)responseWithRequest:(id)a0 data:(id)a1 geckoResData:(id)a2;
+ (BOOL)hasAboutWKContent:(id)a0 request:(id)a1;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)syncChannel:(id)a0 accessKey:(id)a1 resolve:(id /* block */)a2 reject:(id /* block */)a3;
- (id)lockSessionWithRequest:(id)a0;
- (void)p_fetchGeckoDataWithRequest:(id)a0 onlyOffline:(BOOL)a1 waitUpdate:(id)a2 completion:(id /* block */)a3;
- (id)name;
- (void)cancelFetch;

@end
