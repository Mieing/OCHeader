@interface IESECXBridgeEcMallOpenSchemaMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)createJumpSourceBtmTokenWithParamModel:(id)a0;
- (void)debugShowDialog;
- (id)guardLiveTopLevelForSchema:(id)a0;
- (id)addPerfSessionInSchemaIfNeeded:(id)a0 currentSchema:(id)a1;
- (BOOL)isMultiTabScene:(id)a0;
- (id)createJumpSourceBtmTokenWithParamModel:(id)a0 host:(id)a1;
- (long long)authType;
- (id)methodName;

@end
