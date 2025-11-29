@interface AWENearbyRedEnvelopeListDataController : AWEListDataController

@property (nonatomic) long long nextOffset;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
