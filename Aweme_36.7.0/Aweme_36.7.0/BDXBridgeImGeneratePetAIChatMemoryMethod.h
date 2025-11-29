@interface BDXBridgeImGeneratePetAIChatMemoryMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)statusSuccess:(BOOL)a0;
- (void)addLocalSuccessNoticeToCon:(id)a0 text:(id)a1 toArchive:(BOOL)a2;
- (long long)authType;
- (id)methodName;

@end
