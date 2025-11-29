@class NSMutableArray, FeedExtra;

@interface IESLiveViewingHistoryApi : HTSLiveApi

@property (retain, nonatomic) NSMutableArray *historyList;
@property (retain, nonatomic) FeedExtra *currentExtra;
@property (readonly, nonatomic, getter=isHasMore) BOOL hasMore;

- (void)loadHistory:(BOOL)a0 completion:(id /* block */)a1;
- (void)refreshHistory:(id /* block */)a0;
- (void)loadMoreHistory:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
