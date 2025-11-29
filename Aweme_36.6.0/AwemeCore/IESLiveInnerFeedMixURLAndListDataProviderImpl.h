@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveInnerFeedDataDidChangeObserver, IESLiveInnerFeedDataProvider;

@interface IESLiveInnerFeedMixURLAndListDataProviderImpl : NSObject <IESLiveInnerFeedDataDidChangeObserver, IESLiveInnerFeedDataProvider>

@property (retain, nonatomic) id<IESLiveInnerFeedDataProvider> specificURLDataProvider;
@property (retain, nonatomic) id<IESLiveInnerFeedDataProvider> specificListDataProvider;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;

- (void)didSetAttachingDIContext;
- (void)refreshWithPullId:(id)a0;
- (id)initWithRoomAisle:(id)a0 context:(id)a1;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (void)provider:(id)a0 dataDidChangeWithType:(unsigned long long)a1 datas:(id)a2 hasMore:(BOOL)a3 extraParams:(id)a4;
- (void)provider:(id)a0 failToFetchData:(unsigned long long)a1 error:(id)a2 extraParams:(id)a3;
- (void)_initData:(id)a0;
- (void).cxx_destruct;
- (long long)providerType;
- (long long)defaultIndex;

@end
