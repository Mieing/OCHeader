@interface AWEIMInitJobEnvironmentFetcherHasLogin : IESIMJobManagerEnvironmentFetcher

- (BOOL)p_shouldUseCache;
- (id)p_fetch;
- (id)name;

@end
