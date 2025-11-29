@class MMTimer;

@interface WAJSEventHandler_private_quicklyAddBrandContact : WAJSEventHandler_BaseEvent <IContactMgrExt> {
    BOOL _isWaitContactSync;
    MMTimer *_timerContactSync;
}

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)CreateVerify:(id)a0 andScene:(unsigned int)a1;
- (void)scheduleContactSyncTimer;
- (void)invalidateContactSyncTimer;
- (void)onTimeoutContactSync:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)callbackAddContactOK;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
