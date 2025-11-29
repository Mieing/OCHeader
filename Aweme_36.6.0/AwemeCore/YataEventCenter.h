@class YataEventChainExceptionImpl, NSString, NSMutableDictionary, YataEventExprConvertor, _TtC14YataEventChain16EventChainBridge, NSMutableArray, YataEventChainServiceProvider;

@interface YataEventCenter : YataModule <EventChainModifyContextObjCDelegate, EventChainSwitchConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *currentTrigger;
@property (copy, nonatomic) NSString *currentTriggerNodeName;
@property (retain, nonatomic) NSMutableDictionary *eventImplMap;
@property (retain, nonatomic) NSMutableDictionary *bizEventFuncImplMap;
@property (retain, nonatomic) NSMutableDictionary *branchAutoExposureEvents;
@property (retain, nonatomic) NSMutableDictionary *afterRenderEvents;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (retain, nonatomic) YataEventExprConvertor *eventExprConvetor;
@property (retain, nonatomic) _TtC14YataEventChain16EventChainBridge *chain;
@property (retain, nonatomic) YataEventChainServiceProvider *serviceProvider;
@property (retain, nonatomic) YataEventChainExceptionImpl *eventChainExceptionImpl;
@property (nonatomic) BOOL dispatchChainNameWhenEventsEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)containsNullAdjust:(id)a0;

- (void)registerEventFuncImpl:(id)a0;
- (id)modifyContextParamsWithContext:(id)a0;
- (void)unregisterSubscriber:(id)a0;
- (id)initWithYataInstance:(id)a0;
- (BOOL)eventChainModularization;
- (id)bizEventHandleFunction:(id)a0;
- (void)dispatchAutoExposureEvent:(id)a0 activeView:(id)a1;
- (void)dispatchBranchNodeEndDisplayingEvent:(id)a0;
- (void)updateCurrentTrigger:(id)a0 currentNodeName:(id)a1;
- (void)resetEventModelID:(id)a0;
- (void)dispatchEvenChainWithRenderNode:(id)a0 events:(id)a1 triggerContext:(id)a2 initialBizParams:(id)a3;
- (void)setupEventChain;
- (void)registerInnerEvent;
- (id)subscriberForRegisterKey:(id)a0;
- (void)registerSubscriberWith:(id)a0 eventImpl:(id)a1;
- (id)dispatchEventTrigger:(id)a0 renderNode:(id)a1 events:(id)a2 params:(id)a3 activeView:(id)a4 source:(long long)a5;
- (void)checkTriggerWithForbiddenInnerParamsKeys:(id)a0;
- (void)enqueueWithTrigger:(id)a0 eventArray:(id)a1 previousEventID:(id)a2 params:(id)a3 triggerContext:(id)a4;
- (void)checkEventSameLevelSettings:(id)a0 nodeName:(id)a1 events:(id)a2 renderNode:(id)a3;
- (void)startDispatchEvent;
- (BOOL)isEmptyEventForLifeCycleTrigger:(id)a0;
- (void)tryDispatchBranchAutoExposureEvent:(id)a0 activeView:(id)a1;
- (void)tryDispatchBranchNodeEndDisplaying:(id)a0;
- (void)executeEventWithEventData:(id)a0;
- (void)checkMissEventFields:(id)a0 renderNode:(id)a1;
- (void)handleEventResponse:(id)a0 eventData:(id)a1 renderNodeKey:(id)a2 isBizEvent:(BOOL)a3 renderNode:(id)a4 activeView:(id)a5;
- (void)triggerNextEventWithPreEventData:(id)a0 renderNodeKey:(id)a1 activeView:(id)a2 nextEvent:(id)a3 success:(BOOL)a4 isBizEvent:(BOOL)a5;
- (void)registerLifeCycleTrigger:(id)a0 events:(id)a1 renderNode:(id)a2;
- (void)registerRenderNodeAfterRender:(id)a0 events:(id)a1;
- (void)clearBranchAutoExposure;
- (void)registerBranchAutoExposure:(id)a0;
- (void)dispatchTriggerByBiz:(id)a0 renderNode:(id)a1 params:(id)a2 activeView:(id)a3;
- (void)dispatchTriggerByRenderEngine:(id)a0 renderNode:(id)a1 params:(id)a2 activeView:(id)a3;
- (void)dispatchAfterRenderEvent;
- (void)dispatchPopUpEvent;
- (void)enqueueAfterRenderWithEventArray:(id)a0 renderNode:(id)a1 eventData:(id)a2 triggerContext:(id)a3;
- (void).cxx_destruct;

@end
