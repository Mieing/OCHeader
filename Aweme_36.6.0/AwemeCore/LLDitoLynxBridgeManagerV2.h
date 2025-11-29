@class NSString, NSMutableDictionary, UIView, LLDitoLynxBridgeImpl, LLDitoPageContext;
@protocol LLDitoLynxContainerProtocol, LLDitoComponentViewModel;

@interface LLDitoLynxBridgeManagerV2 : NSObject <LLDitoLynxBridgeImplDelegate>

@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) UIView<LLDitoLynxContainerProtocol> *lynxContainer;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (readonly, nonatomic) id<LLDitoComponentViewModel> viewModel;
@property (retain, nonatomic) LLDitoLynxBridgeImpl *bridgeImpl;
@property (readonly, weak, nonatomic) UIView<LLDitoLynxContainerProtocol> *container;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
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
