@class NSString;
@protocol AWEHttpTask;

@interface AWEGuestFollowFeedDataController : AWEListDataController

@property (retain, nonatomic) id<AWEHttpTask> lastRequestTask;
@property (copy, nonatomic) NSString *pageToken;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)requestFollowFeedWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (BOOL)cancelCurrentRequest;

@end
