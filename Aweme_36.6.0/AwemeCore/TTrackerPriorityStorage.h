@class FMDatabaseQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTrackerPriorityStorage : NSObject {
    FMDatabaseQueue *database;
    NSObject<OS_dispatch_queue> *priority_storage_queue;
    NSMutableArray *cache;
    BOOL busy;
    BOOL existsBlockedEvent;
}

+ (id)sharedStorage;

- (void)initDatabase;
- (BOOL)initDatabaseTable;
- (void)flushIfNeed;
- (void)_flushToDatabase:(id)a0;
- (void)ack:(id)a0;
- (void)update:(id)a0 options:(id)a1;
- (void)enqueue:(id)a0;
- (id)filePath;
- (void).cxx_destruct;
- (id)storageQueue;
- (id)init;
- (id)dequeue:(id)a0;

@end
