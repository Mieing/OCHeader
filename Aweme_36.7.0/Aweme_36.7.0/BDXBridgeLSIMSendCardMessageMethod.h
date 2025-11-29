@interface BDXBridgeLSIMSendCardMessageMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendBulletCardMessageWithParamsModel:(id)a0 action:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 logid:(id)a4;
- (void)completionWithParamModel:(id)a0 jsbErrorCode:(long long)a1 errorCode:(long long)a2 message:(id)a3 responseDict:(id)a4 completion:(id /* block */)a5;
- (void)completionWithParamModel:(id)a0 success:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
