@class MMTimer;

@interface WebViewJSEventHandler_quicklyAddContact : WebviewJSEventHandlerBase <PBMessageObserverDelegate, IContactMgrExt> {
    BOOL _isWaitContactSync;
    MMTimer *_timerContactSync;
}

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)CreateVerify:(id)a0 andScene:(unsigned int)a1 reportInfo:(id)a2 scenenote:(id)a3 finderBuffer:(id)a4 searchClickId:(id)a5;
- (void)scheduleContactSyncTimer;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callbackAddContactOK;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
