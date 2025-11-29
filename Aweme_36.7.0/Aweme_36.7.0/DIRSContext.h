@class DIRSNetworking, DIRSStore, NSString, DIRSModuleHive, DIRSEventBatchDispatcher, NSDictionary, DIRSConcurrentCollection, DIRSConfig, NSObject, DIRSIdentity, DIRSBasicFeatureOptions, DIRSLogger;
@protocol SentryProtocol, IRISEventListener, IRISTracker, OS_dispatch_queue;

@interface DIRSContext : NSObject {
    BOOL is_main;
    BOOL launched;
    DIRSConfig *config;
    NSObject<OS_dispatch_queue> *ctx_queue;
    void *ctx_queue_tag;
}

@property (readonly, nonatomic) DIRSLogger *logger;
@property (retain, nonatomic) DIRSModuleHive *modular;
@property (weak, nonatomic) DIRSLogger *logger;
@property (weak, nonatomic) id<IRISTracker> tracker;
@property (weak, nonatomic) DIRSEventBatchDispatcher *dispatcher;
@property (weak, nonatomic) id<IRISEventListener> listener;
@property (weak, nonatomic) DIRSStore *store;
@property (weak, nonatomic) DIRSNetworking *networking;
@property (weak, nonatomic) DIRSIdentity *identity;
@property (weak, nonatomic) id<SentryProtocol> sentry;
@property (weak, nonatomic) DIRSBasicFeatureOptions *basicFeatureOptions;
@property (weak, nonatomic) id samplingModule;
@property (weak, nonatomic) id session;
@property (retain, nonatomic) NSDictionary *registeredModules;
@property (retain, nonatomic) DIRSConcurrentCollection *ctxInfo;
@property (readonly) DIRSConfig *config;
@property (readonly) NSString *name;

+ (id)ctx_all;
+ (void)ctx_add:(id)a0;
+ (void)ctx_remove:(id)a0;
+ (id)ctx_get:(id)a0;
+ (void)configure:(id)a0;
+ (void)initialize;
+ (id)main;
+ (id)defaultModules;

- (void)initBuiltInPrimary;
- (void)initPrimary;
- (void)_setupRegisteredModules;
- (void)async:(id /* block */)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)suspend;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)contextPath;
- (id)init;
- (void)commonInit;
- (void)dispose;
- (BOOL)resume;
- (id)initWithConfig:(id)a0;
- (id)modules;
- (id)contextInfo;
- (void)_initQueue;
- (BOOL)isMainContext;

@end
