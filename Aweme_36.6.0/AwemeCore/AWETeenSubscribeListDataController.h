@class NSNumber, NSDictionary;
@protocol AWEHttpTask;

@interface AWETeenSubscribeListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *count;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSDictionary *logPassback;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
