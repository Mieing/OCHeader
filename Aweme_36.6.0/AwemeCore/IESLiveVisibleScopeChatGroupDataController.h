@class HTSEventContext;

@interface IESLiveVisibleScopeChatGroupDataController : IESLiveListDataController

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 trackerContext:(id)a1;
- (void)monitorFetchDataResultWithError:(id)a0 isFetchMore:(BOOL)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)requestParams;

@end
