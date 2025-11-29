@class WCFinderLRUCache;

@interface WCFinderOuterPreloadManager : NSObject

@property (retain, nonatomic) WCFinderLRUCache *lruCache;

- (void)addOuterPreloadTask:(id)a0;
- (void)addOuterPreloadTaskArray:(id)a0;
- (void)saveAllTasks;
- (id)outerPreloadTaskWithTid:(id)a0;
- (void).cxx_destruct;

@end
