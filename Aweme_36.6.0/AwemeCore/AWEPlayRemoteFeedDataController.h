@class NSString, AFDPlayRemoteAwemeModelProcessor, NSNumber;

@interface AWEPlayRemoteFeedDataController : AWEListDataController <AWEListDataRefreshByReusingLocalDataProtocol>

@property (nonatomic) long long fetchCount;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *watchType;
@property (nonatomic) long long roomMode;
@property (nonatomic) long long pullType;
@property (nonatomic) long long roomProvider;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL useMixFeed;
@property (readonly, nonatomic) AFDPlayRemoteAwemeModelProcessor *modelProcessor;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL supportRichAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)firstAwemeModel;
+ (void)setFirstAwemeModel:(id)a0;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)updateAwemeList:(id)a0;
- (id)_loadmoreDataSourceWithArray:(id)a0 requestId:(id)a1;
- (id)_refreshDataSourceWithArray:(id)a0 cleanRefresh:(BOOL)a1 requestId:(id)a2;
- (void)refreshByReusingLocalDataFromIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRoomID:(id)a0 watchType:(id)a1 roomMode:(long long)a2 roomProvider:(long long)a3 isRemotePlayLegacyVersion:(BOOL)a4;
- (void)updateRoomID:(id)a0 feedType:(long long)a1;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 requestId:(id)a1 isEqual:(id /* block */)a2;
- (void)p_fetchAwemeWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
