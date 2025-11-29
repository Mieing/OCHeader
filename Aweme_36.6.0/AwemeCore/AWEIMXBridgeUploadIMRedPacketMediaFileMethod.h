@interface AWEIMXBridgeUploadIMRedPacketMediaFileMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)p_trackAndInvokeCompletion:(id /* block */)a0 resultModel:(id)a1 status:(id)a2;
- (long long)authType;
- (id)methodName;

@end
