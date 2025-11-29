@interface AWEIMInitJobEnvironmentFetcherFromImPush : IESIMJobManagerEnvironmentFetcher

- (BOOL)p_shouldUseCache;
- (id)p_fetch;
- (id)name;

@end
