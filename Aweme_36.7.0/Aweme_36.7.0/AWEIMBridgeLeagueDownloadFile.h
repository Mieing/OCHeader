@interface AWEIMBridgeLeagueDownloadFile : BDXBridgeMethod

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (BOOL)checkBridgeParamsError:(id)a0;
- (long long)authType;
- (id)methodName;

@end
