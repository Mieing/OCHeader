@interface AWELandscapeFeedDataController : AWEBaseDataController

- (void)loadmoreWithCompletion:(id /* block */)a0;
- (void)fetchWithCompletion:(id /* block */)a0 fetchType:(unsigned long long)a1;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
