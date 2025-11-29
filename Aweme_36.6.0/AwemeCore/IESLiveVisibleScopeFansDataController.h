@class NSString;

@interface IESLiveVisibleScopeFansDataController : IESLiveListDataController

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *uid;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 uid:(id)a1;
- (void)monitorFetchDataResultWithError:(id)a0 isFetchMore:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)requestParams;

@end
