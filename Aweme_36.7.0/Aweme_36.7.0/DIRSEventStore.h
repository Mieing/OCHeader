@class DIRSConcurrentCollection, NSString, DIRSFMDatabaseQueue, NSObject, DIRSContext;
@protocol OS_dispatch_queue, IRISEventSerializer;

@interface DIRSEventStore : DIRSBasicModule <IRISApplicationObserver, IRISEventStore> {
    NSObject<OS_dispatch_queue> *executionQueue;
    NSString *path;
    DIRSFMDatabaseQueue *database;
    DIRSConcurrentCollection *memoryCache;
    DIRSConcurrentCollection *temporaryBatch;
    BOOL batchLocked;
}

@property (weak, nonatomic) id<IRISEventSerializer> serializer;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (void)onApplicationDidReceiveMemoryWarning;
- (BOOL)startWithPath:(id)a0;
- (void)_initDatabase;
- (void)_cleanExpiredEvents;
- (void)_checkFileBytes;
- (void)_batchToDatabase:(id)a0;
- (void)_flushIfNeed;
- (BOOL)_writeEvent:(id)a0 toDatabase:(id)a1 withError:(id *)a2;
- (BOOL)needNotifyEventState;
- (id)_createQuery:(id)a0 usingOptions:(id)a1;
- (id)_sqlParseString:(id)a0;
- (id)executionQueue;
- (void).cxx_destruct;
- (void)commonInit;
- (void)addEvent:(id)a0;
- (void)reset;
- (void)removeEvents:(id)a0;
- (id)executeStatement:(id)a0;
- (id)currentColumns;

@end
