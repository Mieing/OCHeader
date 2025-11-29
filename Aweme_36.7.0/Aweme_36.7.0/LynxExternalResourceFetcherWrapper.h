@protocol LynxDynamicComponentFetcher;

@interface LynxExternalResourceFetcherWrapper : NSObject {
    id<LynxDynamicComponentFetcher> _component_fetcher;
}

- (id)initWithDynamicComponentFetcher:(id)a0;
- (BOOL)fetchResource:(id)a0 withLoadedBlock:(id /* block */)a1 sync:(BOOL)a2;
- (void).cxx_destruct;

@end
