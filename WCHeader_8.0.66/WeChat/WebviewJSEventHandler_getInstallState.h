@interface WebviewJSEventHandler_getInstallState : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)processPackageUrls:(id)a0;
- (BOOL)getInstallStateWithPackageUrl:(id)a0;
- (BOOL)batchGetIntstallState:(id)a0 intoDictionary:(id *)a1;
- (void)batchGetInstallStateInBackground:(id)a0 event:(id)a1;

@end
