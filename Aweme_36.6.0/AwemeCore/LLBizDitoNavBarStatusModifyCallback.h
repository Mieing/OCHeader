@interface LLBizDitoNavBarStatusModifyCallback : NSObject

@property (copy, nonatomic) id /* block */ callback;

- (void)invokeCallbackWithParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;

@end
