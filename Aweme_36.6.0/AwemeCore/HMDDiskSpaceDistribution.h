@class NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDDiskSpaceDistribution : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *priorityQueue;
@property (retain, nonatomic) NSMutableDictionary *modules;
@property (copy, nonatomic) NSArray *moduleClass;
@property (retain, nonatomic) NSMutableArray *callBacks;

+ (id)sharedInstance;

- (id)_moduleClassFromDefaultModuls;
- (void)_addCallBack2PriorityQueue:(id)a0;
- (id)_removableFilesFromModule:(Class)a0;
- (id)_removableFilePathsFromFiles:(id)a0 needSize:(unsigned long long)a1;
- (void)getMoreDiskSpaceWithSize:(unsigned long long)a0 priority:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)registerModule:(id)a0;

@end
