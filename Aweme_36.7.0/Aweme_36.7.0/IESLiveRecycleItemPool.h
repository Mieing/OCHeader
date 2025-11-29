@class NSString, NSMutableDictionary;

@interface IESLiveRecycleItemPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSString *roomID;
@property (nonatomic) BOOL activited;
@property (nonatomic) long long limit;

+ (id)poolWithRoomID:(id)a0 activited:(BOOL)a1;

- (id)fetchRecycleItemWithConfig:(id)a0;
- (void)enqueueRecycleItem:(id)a0;
- (void)enqueueRecycleItemWithPool:(id)a0;
- (void)clearToLimit:(id)a0;
- (void)enqueueRecycleItemList:(id)a0;
- (id)dequeueRecycleItemListWithType:(id)a0;
- (void).cxx_destruct;
- (void)clearPool;

@end
