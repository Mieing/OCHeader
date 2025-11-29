@class NSString, NSMutableArray, HTSLiveRoomAPI;
@protocol IESLiveInnerFeedDataDidChangeObserver;

@interface IESLiveInnerFeedSpecificListDataProviderImpl : NSObject <IESLiveInnerFeedDisplayAction, IESLiveInnerFeedDataProvider>

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) long long defaultIndex;
@property (retain, nonatomic) HTSLiveRoomAPI *roomApi;
@property (nonatomic) BOOL listEmptyOptEnable;
@property (nonatomic) BOOL listEmptyOptTrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (id)initWithRoomAisle:(id)a0;
- (void)initData:(id)a0;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (long long)p_calculateDefaultIndexWithOriginRoom:(id)a0 itemList:(id)a1;
- (void)traceExceptionDefaultIndex:(long long)a0 roomAisle:(id)a1;
- (void)p_prefetchIfNeed:(BOOL)a0 index:(long long)a1 count:(long long)a2;
- (void)_fetchRooms:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)providerType;

@end
