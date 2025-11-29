@class IESLiveInnerFeedContext, NSString;
@protocol IESLiveInnerFeedDataDidChangeObserver, HTSLiveRoomCollectionDelegate;

@interface IESLiveOldOuterProviderAdapter : NSObject <IESLiveInnerFeedDataOuterProvider, HTSLiveRoomCollectionDataObserver, IESLiveInnerFeedDataControlAction>

@property (weak, nonatomic) id<HTSLiveRoomCollectionDelegate> outerDelegate;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (weak, nonatomic) id<IESLiveInnerFeedDataDidChangeObserver> innerFeedDataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithDelegate:(id)a0 context:(id)a1;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedWillUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (void)innerFeedDeletingItems:(id)a0;
- (void)innerFeedDidDeleteItems:(id)a0;
- (void)innerFeedTemporaryStorageItems:(id)a0;
- (void)innerFeedRestoreItems:(id)a0 deleteLandscapeItems:(id)a1;
- (void)dataDidChangedWithTotalRooms:(id)a0 changes:(id)a1;
- (BOOL)innerFeedCanLoadMore;
- (void)innerFeedLoadMore;
- (void)innerFeedInitialFetch;
- (long long)p_calculateDefaultIndexWithOriginRoom:(id)a0 itemList:(id)a1;
- (void)dataDidChangedWithTotalRooms:(id)a0 changes:(id)a1 action:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)providerType;
- (long long)defaultIndex;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
