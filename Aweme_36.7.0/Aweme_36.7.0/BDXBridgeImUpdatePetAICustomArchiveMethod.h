@interface BDXBridgeImUpdatePetAICustomArchiveMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)statusSuccess:(BOOL)a0;
- (void)updateWithDataModel:(id)a0 enable:(BOOL)a1 content:(id)a2 signature:(id)a3;
- (long long)authType;
- (id)methodName;

@end
