@class NSLock, NSMutableArray;

@interface MMPollingFetchQueue : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (readonly, nonatomic) NSMutableArray *list;
@property (readonly, nonatomic) long long count;

- (id)init;
- (void)addOrReplaceItem:(id)a0;
- (void)addOrReplaceItems:(id)a0;
- (void)_addItem:(id)a0;
- (id)itemByCmdId:(long long)a0;
- (BOOL)removeItem:(id)a0;
- (BOOL)removeItemsByCmdIdList:(id)a0;
- (BOOL)removeAllItems;
- (id)popItemsBeforeSortId:(long long)a0;
- (void).cxx_destruct;

@end
