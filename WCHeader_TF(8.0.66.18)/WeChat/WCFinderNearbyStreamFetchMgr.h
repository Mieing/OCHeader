@class NSString, NSArray, NSData, WCFinderAbstractTask, NSMutableArray, FinderStreamLayoutInfo;

@interface WCFinderNearbyStreamFetchMgr : NSObject

@property (retain, nonatomic) NSMutableArray *serverFetchTasks;
@property (retain, nonatomic) WCFinderAbstractTask *currentServerFetchTask;
@property (retain, nonatomic) NSData *lastBuff;
@property (copy, nonatomic) NSString *userCity;
@property (nonatomic) BOOL shouldFetchHistory;
@property (copy, nonatomic) NSArray *streamDataArray;
@property (nonatomic) BOOL needCleanData;
@property (nonatomic) unsigned long long historyType;
@property (nonatomic) BOOL hasFetchEnterData;
@property (nonatomic) BOOL stopFetchNextPage;
@property (nonatomic) unsigned long long prefetchLastFeedCount;
@property (retain, nonatomic) FinderStreamLayoutInfo *layoutInfo;

+ (id)sharedInstance;

- (void)resetMgrData;
- (void)reloadNoMoreDataWithPullType:(unsigned long long)a0;
- (void)reloadErrorPageWithPullType:(unsigned long long)a0;
- (void)loadingNextSreamFeedPage;
- (void)pullToRefreshWithPullType:(unsigned long long)a0 fetchLastestDataWithUnreadDataItems:(id)a1;
- (void)preformNextServerFetchTasks;
- (void)checkServerFetchTasks;
- (void)fetchHistoryWithPullType:(unsigned long long)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)fetchHistoryWithPullType:(unsigned long long)a0;
- (void)fetchLastestDataWithUnreadDataItems:(id)a0;
- (void)requestNextPageData;
- (void).cxx_destruct;

@end
