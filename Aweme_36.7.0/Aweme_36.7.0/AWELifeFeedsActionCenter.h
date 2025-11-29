@class NSMutableDictionary, AWELifeFeedsPageContext;

@interface AWELifeFeedsActionCenter : NSObject

@property (weak, nonatomic) AWELifeFeedsPageContext *pageContext;
@property (retain, nonatomic) NSMutableDictionary *actionMap;

- (void)dispatchAction:(id)a0 completion:(id /* block */)a1;
- (id)initWithPageContext:(id)a0;
- (void)subscribeActionByActionType:(id)a0 target:(id)a1 handler:(id /* block */)a2;
- (void)dispatchActionByActionType:(id)a0 actionContext:(id)a1 completion:(id /* block */)a2;
- (void)dispatchAction:(id)a0 initializeContextWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)dispatchAction:(id)a0 actionContext:(id)a1 completion:(id /* block */)a2;
- (void)dispatchActionByActionType:(id)a0 initializeContextWithBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)keyForTarget:(id)a0;
- (void)dispatchActionByActionType:(id)a0 completion:(id /* block */)a1;
- (void)unsubscribeActionByActionType:(id)a0 target:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
