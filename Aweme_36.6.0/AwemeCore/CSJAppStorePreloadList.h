@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSJAppStorePreloadList : NSObject

@property (retain, nonatomic) NSMutableArray *preloadList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storeSerialQueue;
@property (nonatomic) unsigned long long maxPreloadCount;

- (void)eliminateItems:(id)a0;
- (void)stopLoadItems:(id)a0;
- (void)trackPreloadBreakEvent:(id)a0;
- (void)removeItemByAppID:(id)a0;
- (void)removeItemBySKController:(id)a0;
- (id)preloadItemForAppID:(id)a0;
- (id)duplicatedPreloadItemForAppID:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
