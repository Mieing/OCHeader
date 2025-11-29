@class NSString, NSMutableDictionary;

@interface AnnieXLatchHandler : NSObject <IESLatchMonitorProtocol>

@property (retain, nonatomic) NSMutableDictionary *originURLToAnnieXLatchDataMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fireWithContainer:(id)a0 kitView:(id)a1;
- (void)duringLynxViewBuilding:(id)a0 containerID:(id)a1 context:(id)a2;
- (BOOL)enableLatchWithQueryItems:(id)a0;
- (BOOL)enableLatchWithContainer:(id)a0;
- (void)setupAnnieLatch;
- (void)reportCustomWithEventName:(id)a0 url:(id)a1 lynxView:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 maySample:(BOOL)a6;
- (void)reportCustomWithEventName:(id)a0 containerId:(id)a1 url:(id)a2 lynxView:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 maySample:(BOOL)a7;
- (void)stopWithContainer:(id)a0;
- (void)onLynxViewCreated:(id)a0;
- (void)stopWithAnnieXCard:(id)a0;
- (void)fireWithAnnieXCard:(id)a0 kitView:(id)a1;
- (void)duringLynxViewBuildingWithAnnieXCard:(id)a0 builder:(id)a1 containerID:(id)a2;
- (void)onLynxViewCreatedWithAnnieXCard:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
