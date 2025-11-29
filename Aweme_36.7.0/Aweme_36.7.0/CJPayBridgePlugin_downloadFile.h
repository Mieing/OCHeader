@interface CJPayBridgePlugin_downloadFile : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (BOOL)p_allowDownload:(id)a0;
- (id)safeHeaderParams;
- (void)p_share:(id)a0 callBack:(id /* block */)a1;
- (void)downloadFileWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end
