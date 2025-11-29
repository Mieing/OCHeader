@class NSDictionary, NSString;

@interface BDMannorShowFeedbackComponentMethod : BDXBridgeMethod

@property (copy, nonatomic) NSDictionary *injectHandlerMap;
@property (copy, nonatomic) NSString *componentType;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void).cxx_destruct;
- (long long)authType;
- (id)methodName;

@end
