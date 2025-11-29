@class NSOperationQueue, NSMutableArray, NSPointerArray;
@protocol IESGCPPreloadTaskCacheStore;

@interface IESGCPPreloadTaskManager : NSObject

@property (retain, nonatomic) id<IESGCPPreloadTaskCacheStore> cacheStore;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (retain, nonatomic) NSMutableArray *fetchers;
@property (retain, nonatomic) NSMutableArray *children;

+ (id)globalManager;
+ (id)manager;

- (id)preloadTasks;
- (void)addPreloadTask:(id)a0;
- (id)initWithCacheStore:(id)a0;
- (void)doInOperationQueue:(id /* block */)a0;
- (void)_didFinishTask:(id)a0 withResult:(id)a1;
- (void)addResultFetcher:(id)a0;
- (void)addChildTaskManager:(id)a0;
- (void)removeChildTaskManager:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)_fetchCache:(id)a0;

@end
