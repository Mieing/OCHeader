@interface IESForestBuiltinFetcher : IESForestBaseFetcher

+ (id)fetcherName;

- (void)fetchResourceWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchImageWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)name;
- (void)cancelFetch;

@end
