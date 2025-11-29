@class DitoPageContext, NSString, NSMutableDictionary, UIView, DitoLynxBridgeImpl;
@protocol IESLLTempoContainerProtocol;

@interface AWEPOITempoBridgeManager : NSObject <DitoLynxBridgeImplDelegate>

@property (weak, nonatomic) UIView<IESLLTempoContainerProtocol> *tempoContainer;
@property (copy, nonatomic) NSString *nodeTag;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) DitoLynxBridgeImpl *bridgeImpl;
@property (weak, nonatomic) DitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (id)initWithTempoContainer:(id)a0 nodeTag:(id)a1;
- (void)subscribeBDXEvent;
- (void)subscribeScrollEventFrequency;
- (void)observeModalViewOffset;
- (void)subscribeNormalEvent;
- (void)subscribeDispatchAction;
- (void)subscribeDispatchPOIAction;
- (void)subscribeInvokeDitoEvent;
- (id)tempoViewModel;
- (void).cxx_destruct;
- (void)dealloc;

@end
