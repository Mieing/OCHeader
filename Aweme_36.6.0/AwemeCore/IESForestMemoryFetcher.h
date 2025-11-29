@interface IESForestMemoryFetcher : IESForestBaseFetcher

+ (id)fetcherName;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCacheSourceValid:(id)a0 request:(id)a1;
- (id)name;
- (void)cancelFetch;

@end
