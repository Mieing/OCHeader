@class NSString, NSObject, DIRSContext;
@protocol OS_dispatch_queue, IRISServiceSchema, HistoricalDatabase;

@interface DIRSHistoricalEventDispatcher : DIRSBasicModule <IRISIdentifierObserver, IRISApplicationObserver, IRISTimer> {
    id<HistoricalDatabase> historical;
    BOOL _identifierAvailable;
    BOOL _executed;
    NSObject<OS_dispatch_queue> *executionQueue;
    id<IRISServiceSchema> schema;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double tickTime;

+ (id)moduleId;
+ (id)moduleVersion;

@end
