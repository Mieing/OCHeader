@class NSMutableDictionary, NSHashTable;
@protocol LynxServiceEventReporterProtocol;

@interface LynxEventReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *allGenericInfo;
@property (retain, nonatomic) NSMutableDictionary *allExtraParams;
@property (retain, nonatomic) NSHashTable *observerList;
@property (retain, nonatomic) id<LynxServiceEventReporterProtocol> eventReporterService;

+ (void)addEventReportObserver:(id)a0;
+ (void)onEvent:(id)a0 instanceId:(int)a1 props:(id)a2;
+ (void)updateGenericInfo:(id)a0 key:(id)a1 instanceId:(int)a2;
+ (void)clearCacheForInstanceId:(int)a0;
+ (void)runOnReportThread:(id /* block */)a0;
+ (void)delayRunOnReportThread:(id /* block */)a0 delayMs:(long long)a1;
+ (void)onEvent:(id)a0 instanceId:(int)a1 propsBuilder:(id /* block */)a2;
+ (void)removeGenericInfo:(int)a0;
+ (void)getGenericInfo:(int)a0 completion:(id /* block */)a1;
+ (void)moveExtraParams:(int)a0 toInstanceId:(int)a1;
+ (void)putExtraParams:(id)a0 forInstanceId:(int)a1;
+ (void)removeEventReportObserver:(id)a0;
+ (id)sharedInstance;

- (void)handleEvent:(id)a0 props:(id)a1 instanceId:(int)a2;
- (void)setupEventReporterServiceIfNeeded;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
