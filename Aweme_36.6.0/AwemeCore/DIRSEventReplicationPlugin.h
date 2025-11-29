@class DIRSEventComparator, NSString, DIRSValue, NSArray, NSObject, DIRSContext;
@protocol OS_dispatch_queue, IRISEventStore, IRISEventSerializer;

@interface DIRSEventReplicationPlugin : DIRSBasicModule <IRISModule, IRISEventObserver, IRISApplicationObserver, IRISConfigurationObserver, IRISParameterHandler> {
    NSObject<OS_dispatch_queue> *execution_queue;
    NSArray *batchExecutorHolders;
}

@property (retain, nonatomic) DIRSEventComparator *comparator;
@property (retain, nonatomic) id<IRISEventStore> store;
@property (retain, nonatomic) id<IRISEventSerializer> eventSerializer;
@property (retain, nonatomic) DIRSValue *config;
@property (nonatomic) long long configVersion;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleDependencies;
+ (id)moduleVersion;

@end
