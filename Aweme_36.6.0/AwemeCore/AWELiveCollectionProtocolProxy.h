@class NSString;
@protocol AWELiveCollectionProtocol, HTSLiveRoomCollectionDataObserver;

@interface AWELiveCollectionProtocolProxy : NSObject <HTSLiveRoomCollectionDelegate>

@property (weak, nonatomic) id<AWELiveCollectionProtocol> delegate;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (BOOL)canLoadMore;
- (void)loadMore:(id)a0 completion:(id /* block */)a1;
- (void)changeToIndex:(unsigned long long)a0;
- (id)initWithCollectionDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
