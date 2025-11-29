@class NSString, NSMutableArray, HTSLiveRoomAPI;
@protocol HTSLiveRoomCollectionDataObserver;

@interface IESLiveRoomSlideSpecifyListStore : NSObject <HTSLiveRoomCollectionDelegate>

@property (nonatomic) long long index;
@property (nonatomic) long long lastIndex;
@property (retain, nonatomic) NSMutableArray *cellModels;
@property (retain, nonatomic) HTSLiveRoomAPI *roomApi;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canLoadMore;
- (void)changeToIndex:(unsigned long long)a0;
- (BOOL)deleteModel:(id)a0;
- (BOOL)deleteRoom:(id)a0;
- (id)initWithRoomAisle:(id)a0;
- (void)_fetchRooms:(id)a0 completion:(id /* block */)a1;
- (void)_prefetchIfNeed:(BOOL)a0 count:(long long)a1;
- (void).cxx_destruct;
- (BOOL)hasMore;

@end
