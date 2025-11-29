@interface BDXBridgeOpenFaceSharePanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)p_shareConfig:(id)a0;
- (void)p_handleResult:(BOOL)a0 params:(id)a1 completionHandler:(id /* block */)a2;
- (void)p_sendMessage:(id)a0 cid:(id)a1 completionHandler:(id /* block */)a2 taskInfo:(id)a3 isQuestion:(BOOL)a4 needToast:(BOOL)a5;
- (void)p_finishActivityWithCid:(id)a0;
- (long long)authType;
- (id)methodName;

@end
