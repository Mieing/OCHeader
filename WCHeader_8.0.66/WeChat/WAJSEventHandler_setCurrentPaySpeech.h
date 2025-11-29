@interface WAJSEventHandler_setCurrentPaySpeech : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (BOOL)copyFile:(id)a0 packId:(id)a1;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)saveCurrentConfig:(id)a0;
- (void)onFail;
- (void)onOk;

@end
