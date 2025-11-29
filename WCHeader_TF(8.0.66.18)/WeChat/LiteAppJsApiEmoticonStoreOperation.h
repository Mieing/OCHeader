@interface LiteAppJsApiEmoticonStoreOperation : LiteAppJsApi

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (BOOL)checkLimitMode;
- (id)getDownloadMgr;
- (void)endWithOK;

@end
