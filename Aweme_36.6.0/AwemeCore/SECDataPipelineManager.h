@class NSDictionary, NSMutableDictionary, NSString;

@interface SECDataPipelineManager : NSObject <SECEventCenterDelegate>

@property (retain, nonatomic) NSMutableDictionary *workersMap;
@property (copy, nonatomic) NSDictionary *immutableWorkers;
@property (retain, nonatomic) NSMutableDictionary *filters;
@property (copy, nonatomic) NSDictionary *immutableFilters;
@property BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)eventFilterForSpace:(id)a0;
- (id)pipelineForSpace:(id)a0;
- (void)eventCenter:(id)a0 willPublishEvent:(id)a1;
- (void)addEventFilter:(id)a0 forSpace:(id)a1;
- (void)addDataWorkerClz:(Class)a0 forSpace:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
