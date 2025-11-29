@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveInnerFeedDataOuterProvider, IESLiveInnerFeedDataDidChangeObserver;

@interface IESLiveInnerFeedInOutSyncDataProviderImpl : NSObject <IESLiveInnerFeedDataProvider>

@property (retain, nonatomic) id<IESLiveInnerFeedDataOuterProvider> outerProvider;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoomAisle:(id)a0 context:(id)a1;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (void)_initData:(id)a0;
- (void).cxx_destruct;
- (long long)providerType;
- (long long)defaultIndex;

@end
