@class NSString, NSNumber, NSArray;
@protocol AWEHttpTask;

@interface AWENewsAISmartFeedDataController : AWEListDataController

@property (copy, nonatomic) NSString *interestCategory;
@property (nonatomic) long long offset;
@property (retain, nonatomic) NSNumber *lastTimeStamp;
@property (retain, nonatomic) NSNumber *firstTimeStamp;
@property (nonatomic) long long requireCount;
@property (nonatomic) long long feedTabType;
@property (copy, nonatomic) NSArray *forceIDList;
@property (weak, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (copy, nonatomic) NSString *track;
@property (retain, nonatomic) NSNumber *trackID;
@property (copy, nonatomic) NSString *trackDesc;
@property (nonatomic) double beginRequestTime;
@property (nonatomic) double endRequestTime;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)loadDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)p_loadDiscoveryDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)p_loadTrackDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)p_loadTrackDetailDataWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)p_createDiscoveryProviderWithPullType:(long long)a0;
- (void)p_handleResponseWithPullType:(long long)a0 cardList:(id)a1 tabType:(long long)a2 completion:(id /* block */)a3;
- (id)p_createTrackProviderWithPullType:(long long)a0;
- (id)p_createTrackDetailProviderWithPullType:(long long)a0;
- (void)fetchListDataWithRefreshType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)cancelCurrentRequest;
- (void)updateWithContext:(id)a0;

@end
