@class NSMutableDictionary, LLDitoPageContext;

@interface LLDitoActionCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionMap;
@property (weak, nonatomic) LLDitoPageContext *context;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (void)subscribeActionByActionType:(id)a0 target:(id)a1 handler:(id /* block */)a2;
- (void)dispatchActionByActionType:(id)a0 actionContext:(id)a1 completion:(id /* block */)a2;
- (void)dispatchAction:(id)a0 initializeContextWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)dispatchAction:(id)a0 actionContext:(id)a1 completion:(id /* block */)a2;
- (void)dispatchActionByActionType:(id)a0 initializeContextWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)keyForTarget:(id)a0;
- (void)dispatchActionByActionType:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeActionByActionType:(id)a0 target:(id)a1;
- (void)reloadPage;
- (void)preloadLynxWithCompletion:(id /* block */)a0;
- (void)openURL:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
