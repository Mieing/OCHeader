@interface BDXBridgeSetContainerMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePageUI:(id)a0 viewController:(id)a1;
- (void)updateCommonInteraction:(id)a0 viewController:(id)a1;
- (void)updatePageInteraction:(id)a0 viewController:(id)a1;
- (void)updatePopInteraction:(id)a0 viewController:(id)a1;
- (long long)authType;
- (id)methodName;

@end
