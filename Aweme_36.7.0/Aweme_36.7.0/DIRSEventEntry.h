@class NSError, DIRSEventUniqueIndexGenerator, NSString, NSArray, DIRSContext, NSMutableDictionary, NSDictionary, NSObject;
@protocol IRISModule, IRISEventStore, IRISEventPreProcedureHandler, IRISEventSerializer, OS_dispatch_queue;

@interface DIRSEventEntry : DIRSBasicModule <IRISParameterHandler, IRISModule, IRISTracker> {
    NSMutableDictionary *environmentVars;
    NSObject<OS_dispatch_queue> *event_process_queue;
    void *event_process_queue_tag;
    id<IRISEventPreProcedureHandler> propertyValidator;
    NSArray *eventPreHandlers;
    NSArray *eventHandlers;
    NSMutableDictionary *globalProperties;
    NSMutableDictionary *commonParameters;
    DIRSEventUniqueIndexGenerator *indexGenerator;
    NSError *disableError;
    _Atomic long long stained_id;
    unsigned long long stained_types;
}

@property (retain, nonatomic) id<IRISEventStore> store;
@property (retain, nonatomic) id<IRISEventSerializer, IRISModule> serializer;
@property (retain, nonatomic) id<IRISEventStore, IRISModule> temporary;
@property (retain, nonatomic) NSDictionary *featureParameters;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)addCommonParameters:(id)a0;
- (void)waitUtilDone;
- (id)exportFeatureParameters;
- (void)configureUsingBlock:(id /* block */)a0;
- (id)stainedProperties;
- (id)globalProperties;
- (id)enviromentVarForKey:(id)a0;
- (void)setupCustomEventStore;
- (void)_initPlugins;
- (void)_applyEnviromentVars:(id)a0;
- (void)_appendCommonParamters:(id)a0;
- (void)_appendGlobalProperty:(id)a0;
- (void)_appendEventIndex:(id)a0;
- (id)builtInEventTypes;
- (BOOL)customEventIsolated;
- (BOOL)isBuiltInTypeEvent:(id)a0;
- (id)customEventStore;
- (void)setEnviromentVar:(id)a0 forKey:(id)a1;
- (void)addGlobalProperties:(id)a0;
- (void)removeGlobalPropertieKeys:(id)a0;
- (void)removeCommonParametersForKeys:(id)a0;
- (void)_handleTemporary;
- (void)setEnviromentVariables:(id)a0;
- (void)async:(id /* block */)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)storePath;
- (void)dispatch:(id)a0;
- (void)run;
- (void)trackEvent:(id)a0;
- (void)removeAllEvents;
- (id)eventParameters;

@end
