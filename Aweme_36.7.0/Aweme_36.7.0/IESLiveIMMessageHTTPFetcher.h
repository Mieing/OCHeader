@interface IESLiveIMMessageHTTPFetcher : IESLiveIMHTTPFetcher

@property (nonatomic) long long fetchCounter;

- (void)fetchWithContext:(id)a0 state:(id /* block */)a1 data:(id /* block */)a2;
- (id)init;

@end
