@class RTVVoipTracker, NSMutableDictionary, NSString;

@interface RTVPipelineComponent : RTVComponentBase <RTVPipelineInterface>

@property (retain) NSMutableDictionary *handlersMap;
@property (retain) NSMutableDictionary *domainEvents;
@property (nonatomic) double initTime;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)doEvent:(id)a0;
- (void)addPipelineEventHandler:(id)a0;
- (void)onContextWillDealloc;
- (void)p_reportCurrentPipelineEvent;
- (void)__doEventInternal:(id)a0;
- (void)__inlineEvent:(id)a0;
- (void).cxx_destruct;

@end
