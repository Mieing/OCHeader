@class NSArray, NSMutableDictionary, HTSEventContext, IESLiveShortTouchItem, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLiveShortTouchActionDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *allItems;
@property (retain, nonatomic) NSArray *visibleItems;
@property (retain, nonatomic) NSMutableDictionary *configs;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveShortTouchItem *currentTempStateItem;

- (void)setupConfigs;
- (void)orderItems;
- (void)updateVisibleItems;
- (BOOL)updatePriority:(long long)a0 type:(long long)a1;
- (long long)indexForVisibleItem:(id)a0;
- (id)visibleItemForType:(unsigned long long)a0;
- (id)updateItemsHidden:(BOOL)a0 hideMode:(int)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (long long)removeItem:(id)a0;
- (long long)insertItem:(id)a0;
- (id)init;
- (void)removeAllItems;
- (void)updateItems;
- (id)itemForIndex:(long long)a0;
- (id)itemForType:(unsigned long long)a0;
- (BOOL)containsType:(unsigned long long)a0;

@end
