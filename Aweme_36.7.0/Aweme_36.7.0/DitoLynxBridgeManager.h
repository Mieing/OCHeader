@class AWEPOICubeView, NSString, NSMutableDictionary, NSMutableSet, DitoPageContext, DitoLynxBridgeImpl;

@interface DitoLynxBridgeManager : NSObject <DitoLynxBridgeImplDelegate>

@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) AWEPOICubeView *container;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) NSMutableSet *subscribeActionTypeSet;
@property (retain, nonatomic) DitoLynxBridgeImpl *bridgeImpl;
@property (weak, nonatomic) DitoPageContext *pageContext;
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
