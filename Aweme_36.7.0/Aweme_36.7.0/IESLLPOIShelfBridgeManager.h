@class NSString, NSMutableDictionary, LLDitoPageContext, LLDitoLynxBridgeImpl;

@interface IESLLPOIShelfBridgeManager : NSObject <LLDitoLynxBridgeImplDelegate>

@property (copy, nonatomic) NSString *nodeTag;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (retain, nonatomic) LLDitoLynxBridgeImpl *bridgeImpl;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (id)initWithNodeTag:(id)a0;
- (void)subscribeBDXEvent;
- (void)subscribeScrollEventFrequency;
- (void)observeModalViewOffset;
- (void)subscribeNormalEvent;
- (void)subscribeDispatchAction;
- (void)subscribeDispatchPOIAction;
- (void)subscribeInvokeDitoEvent;
- (id)shelfViewModel;
- (void).cxx_destruct;
- (void)dealloc;

@end
