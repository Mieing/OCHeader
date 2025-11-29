@interface IESIMJobManagerEnvironmentTimeBasedCacheFetcher : IESIMJobManagerEnvironmentFetcher

@property (nonatomic) double lastFetch;
@property (readonly, nonatomic) double lifeTime;
@property (readonly, copy, nonatomic) id /* block */ fetcher;

- (BOOL)p_shouldUseCache;
- (id)p_fetch;
- (id)initWithLifeTime:(double)a0 fetcher:(id /* block */)a1;
- (void).cxx_destruct;

@end
