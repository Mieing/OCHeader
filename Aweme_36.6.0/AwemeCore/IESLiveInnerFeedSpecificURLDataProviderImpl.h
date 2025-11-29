@class NSString, IESLiveInnerFeedContext, NSDictionary, FeedItem, NSObject, HTSLiveFeedDataApi, NSMutableArray, IESLiveEnterRoomAisle;
@protocol OS_dispatch_group, IESLiveInnerFeedDataDidChangeObserver;

@interface IESLiveInnerFeedSpecificURLDataProviderImpl : NSObject <IESLiveInnerFeedDataProvider>

@property (retain, nonatomic) NSMutableArray *injections;
@property (retain, nonatomic) FeedItem *originItem;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSString *innerFeedURL;
@property (retain, nonatomic) NSDictionary *urlParams;
@property (nonatomic) BOOL reportNotHasMore;
@property (nonatomic) int requestFeedCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)refreshWithPullId:(id)a0;
- (id)netQualityInfo;
- (id)initWithRoomAisle:(id)a0 context:(id)a1;
- (void)initData:(id)a0;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (void)registerInjections:(id)a0;
- (void)dealUrlParamsWithInnerFeedUrl:(id)a0;
- (void)startFetch:(unsigned long long)a0 businessParams:(id)a1;
- (id)filterHiddenItems:(id)a0;
- (void)trackerFeedApiWithRequestParams:(id)a0 withResponse:(id)a1 withError:(id)a2 retryCount:(unsigned long long)a3 duration:(double)a4 injectionDuration:(double)a5;
- (void)_fetchInfoWith:(id)a0 parameters:(id)a1 header:(id)a2 fetchType:(unsigned long long)a3 retryCount:(unsigned long long)a4 finished:(id /* block */)a5;
- (void).cxx_destruct;
- (long long)providerType;
- (long long)defaultIndex;

@end
