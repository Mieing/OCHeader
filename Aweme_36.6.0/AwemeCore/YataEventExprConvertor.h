@protocol YataInstanceInnerInterface;

@interface YataEventExprConvertor : NSObject

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;

- (id)initWithYataInstance:(id)a0;
- (void)convertEventExprFromEventData:(id)a0 eventHandler:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)convertEventControlFlowExpr:(id)a0 env:(id)a1 error:(id *)a2;
- (id)convertEventFieldsExprFromEvent:(id)a0 eventHandler:(id)a1 env:(id)a2;
- (id)_convertExprToKVFromFields:(id)a0 expressionWrapper:(id)a1 env:(id)a2;
- (void).cxx_destruct;

@end
