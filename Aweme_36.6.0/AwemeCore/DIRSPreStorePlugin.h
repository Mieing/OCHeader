@class NSString, DIRSFMDatabaseQueue, NSObject, DIRSContext;
@protocol OS_dispatch_queue, IRISEventSerializer;

@interface DIRSPreStorePlugin : DIRSBasicModule <IRISModule, IRISEventStore> {
    NSObject<OS_dispatch_queue> *executionQueue;
    NSString *path;
    DIRSFMDatabaseQueue *database;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IRISEventSerializer> serializer;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)queryEvents:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)startWithPath:(id)a0;
- (void)_initDataTable;
- (void).cxx_destruct;
- (void)stop;
- (void)commonInit;
- (void)addEvent:(id)a0;
- (void)run;
- (void)removeEvents:(id)a0;

@end
