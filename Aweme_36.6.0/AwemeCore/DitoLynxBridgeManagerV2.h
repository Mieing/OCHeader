@class DitoPageContext, NSString, NSMutableDictionary, UIView, DitoLynxBridgeImpl;
@protocol DitoLynxContainerProtocol, DitoComponentViewModel;

@interface DitoLynxBridgeManagerV2 : NSObject <DitoLynxBridgeImplDelegate>

@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) UIView<DitoLynxContainerProtocol> *lynxContainer;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (readonly, nonatomic) id<DitoComponentViewModel> viewModel;
@property (retain, nonatomic) DitoLynxBridgeImpl *bridgeImpl;
@property (readonly, weak, nonatomic) UIView<DitoLynxContainerProtocol> *container;
@property (weak, nonatomic) DitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (void)scrollNode:(id)a0;
- (void)subscribeBDXEvent;
- (void)subscribeDispatchAction;
- (void)subscribeDispatchPOIAction;
- (void)subscribeInvokeDitoEvent;
- (id)initWithLynxContainer:(id)a0 nodeTag:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
