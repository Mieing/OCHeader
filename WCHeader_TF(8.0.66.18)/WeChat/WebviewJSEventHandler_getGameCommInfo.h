@interface WebviewJSEventHandler_getGameCommInfo : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)extractLocalIds:(id)a0;
- (id)saveWebResource:(id)a0;
- (id)checkWebResourceValidation:(id)a0;
- (BOOL)backupLocalResItem:(id)a0 key:(id)a1;
- (id)readLocalResItemBackup:(id)a0;
- (int)updateAppInfo:(id)a0;

@end
