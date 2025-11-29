@protocol IESLiveEcommerceSKUInterface;

@interface IESECLiveOpenSKUBridgeMethod : IESECLiveOldBridgeMethod

@property (retain, nonatomic) id<IESLiveEcommerceSKUInterface> SKUManager;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)methodName;

@end
