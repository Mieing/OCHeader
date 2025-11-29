@class FMDatabaseQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTrackerHAStorage : NSObject {
    NSObject<OS_dispatch_queue> *ha_dispacher_storage_queue;
    FMDatabaseQueue *ha_database;
    BOOL busy;
    BOOL existsBlockedEvent;
    NSMutableArray *cache;
}

@property (nonatomic) BOOL autoAck;
@property (nonatomic) unsigned long long databaseLimit;

- (void)healthCheck;
- (void)initDatabase;
- (BOOL)initDatabaseTable;
- (void)flushIfNeed;
- (void)_flushToDatabase:(id)a0;
- (id)_queryAndAck:(id)a0;
- (void)_removeEventsUsePriority:(id)a0 rangeIds:(id)a1;
- (void)enqueue:(id)a0;
- (id)filePath;
- (void).cxx_destruct;
- (id)storageQueue;
- (id)init;
- (void)clearEvent;
- (id)dequeue:(id)a0;

@end
