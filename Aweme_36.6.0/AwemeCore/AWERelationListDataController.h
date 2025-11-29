@class AWEFansListFansCountWrapperModel, NSString, NSArray, NSDictionary, NSMutableArray;

@interface AWERelationListDataController : AWEListDataController <AWERelationListDataProtocol>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long maxTime;
@property (nonatomic) unsigned long long minTime;
@property (nonatomic) unsigned long long currentMaxTime;
@property (nonatomic) BOOL isMine;
@property (nonatomic) long long offset;
@property (nonatomic) long long requestCycle;
@property (nonatomic) BOOL hasMoreRecommendations;
@property (retain, nonatomic) NSMutableArray *pendingUsers;
@property (nonatomic) BOOL disableRecommend;
@property (copy, nonatomic) NSString *storePage;
@property (nonatomic) long long groupFilterType;
@property (nonatomic) long long type;
@property (nonatomic) long long privacy;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long vcdCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long vcdAuthFirstTime;
@property (nonatomic) long long sortingSourceType;
@property (nonatomic) long long fansSortType;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (retain, nonatomic) AWEFansListFansCountWrapperModel *fansCountWrapperModel;
@property (copy, nonatomic) NSString *insertIds;
@property (nonatomic) long long mixCount;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)getExpectedSizeInfo;
- (id)initWithType:(long long)a0 uid:(id)a1 isMine:(BOOL)a2 disableRecommend:(BOOL)a3;
- (id)paramsForNetworkServiceWithLoadMore:(BOOL)a0;
- (id)URLForNetworkService;
- (void)updateGroupFilterType:(long long)a0;
- (void)fetchGroupFilterDataCompletion:(id /* block */)a0;
- (void)updateSortOrder:(long long)a0 persistence:(BOOL)a1;
- (id)sortTypeRememberFullKey;
- (BOOL)enableRecycleRequestWhenLessData;
- (void)loadWithCompletion:(id /* block */)a0 incremental:(BOOL)a1 minimumPendingCount:(unsigned long long)a2 maximumRequestCycle:(unsigned long long)a3;
- (BOOL)enableFollowingListSortTypeByEnv;
- (void)processPrivacy:(id)a0 maxTime:(long long)a1;
- (id)initWithType:(long long)a0 uid:(id)a1 isMine:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
