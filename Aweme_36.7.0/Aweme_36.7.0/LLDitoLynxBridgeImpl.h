@class LLDitoPageContext, NSMutableSet;
@protocol LLDitoLynxBridgeImplDelegate;

@interface LLDitoLynxBridgeImpl : NSObject

@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (retain, nonatomic) NSMutableSet *subscribeActionTypeSet;
@property (weak, nonatomic) id<LLDitoLynxBridgeImplDelegate> delegate;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)initWithPageContext:(id)a0;
- (void)subscribeBDXEvent;
- (void)subscribeSubscribeDitoAction;
- (void)subscribeUnSubscribeDitoAction;
- (void)didReceiveLynxSubscribeAction:(id)a0;
- (void)invokeLynxSubscribeActionCallback:(id)a0;
- (void)didReceiveLynxUnSubscribeAction:(id)a0;
- (void).cxx_destruct;

@end
