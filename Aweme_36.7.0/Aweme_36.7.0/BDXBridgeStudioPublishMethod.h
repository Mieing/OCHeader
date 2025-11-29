@interface BDXBridgeStudioPublishMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)createPublishModel;
- (void)publishPicture:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
