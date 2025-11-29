@class NSNumber, NSString;

@interface AWEFollowRecentUserUnreadListDataController : AWEListDataController

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *scene;
@property (nonatomic) BOOL needTotal;
@property (retain, nonatomic) NSNumber *firstRefreshTotalCount;
@property (copy, nonatomic) NSString *insertIds;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadDataWithCompletion:(id /* block */)a0 pullType:(long long)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
