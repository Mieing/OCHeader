@interface BDUGLuckySaveImageXBridge : BDUGLuckyXBridgeMethod

@property (copy, nonatomic) id /* block */ completionHandler;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void).cxx_destruct;
- (id)methodName;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
