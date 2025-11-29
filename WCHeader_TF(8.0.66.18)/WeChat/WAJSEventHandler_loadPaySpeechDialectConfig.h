@interface WAJSEventHandler_loadPaySpeechDialectConfig : WAJSEventHandler_BaseEvent

- (void)checkAndSaveDefaultSpeechPos;
- (void)handleJSEvent:(id)a0;
- (void)saveCurrentConfig:(id)a0;
- (id)getConfigKey;
- (id)getCurrentSpeechConfig;
- (void)onFail;

@end
