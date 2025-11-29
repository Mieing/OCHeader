@interface BDXBridgeCloseImBulletCard : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)p_hideMsgPageBottomBulletBarInCid:(id)a0;
- (long long)authType;
- (id)methodName;

@end
