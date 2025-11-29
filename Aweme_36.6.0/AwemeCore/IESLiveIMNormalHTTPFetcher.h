@interface IESLiveIMNormalHTTPFetcher : IESLiveIMMessageHTTPFetcher

@property (nonatomic) BOOL enableHeaderFields;

- (void)fetchWithContext:(id)a0 state:(id /* block */)a1 data:(id /* block */)a2;

@end
