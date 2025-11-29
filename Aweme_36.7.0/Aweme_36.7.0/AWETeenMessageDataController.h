@protocol AWEHttpTask;

@interface AWETeenMessageDataController : AWEListDataController

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long topGroup;
@property (nonatomic) long long count;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)p_getParamsWithPullType:(long long)a0;
- (void)loadMessageList:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
