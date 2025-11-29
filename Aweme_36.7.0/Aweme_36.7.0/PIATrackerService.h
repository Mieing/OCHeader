@class NSString, PIABiMapTable;

@interface PIATrackerService : NSObject <PIATrackerService>

@property (retain, nonatomic) PIABiMapTable *globalEventMap;
@property (retain, nonatomic) PIABiMapTable *engineEventMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)addEvent:(id)a0 metrics:(id)a1 engine:(id)a2;
- (void)addEvent:(id)a0 categories:(id)a1 engine:(id)a2;
- (id)obtainMetricsDataEvent:(id)a0 engine:(id)a1;
- (id)obtainCategoriesDataEvent:(id)a0 engine:(id)a1;
- (id)obtainCategoriesAndMetricsDataEvent:(id)a0 engine:(id)a1;
- (void)clearEvent:(id)a0 engine:(id)a1;
- (void)flushEvent:(id)a0 engine:(id)a1;
- (void)reportEvent:(id)a0 params:(id)a1 engine:(id)a2;
- (void)reportFullLineEvent:(id)a0 params:(id)a1 engine:(id)a2;
- (void)reportFullLineWithParams:(id)a0 engine:(id)a1;
- (void)reportE2EEvent:(id)a0 params:(id)a1 engine:(id)a2;
- (void)addEvent:(id)a0 metrics:(id)a1 categories:(id)a2 engine:(id)a3;
- (id)eventObjectInMap:(id)a0 event:(id)a1;
- (id)eventMapForEngine:(id)a0;
- (void).cxx_destruct;

@end
