@class NSString, NSMutableDictionary, LLCubeView, NSMutableSet, LLDitoLynxBridgeImpl, LLDitoPageContext;

@interface LLDitoLynxBridgeManager : NSObject <LLDitoLynxBridgeImplDelegate>

@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) LLCubeView *container;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) NSMutableSet *subscribeActionTypeSet;
@property (retain, nonatomic) LLDitoLynxBridgeImpl *bridgeImpl;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (void)subscribeBDXEvent;
- (void)subscribeDispatchAction;
- (id)initWithNodeContainer:(id)a0 nodeTag:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
