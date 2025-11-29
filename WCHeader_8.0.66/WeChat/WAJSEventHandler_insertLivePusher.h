@interface WAJSEventHandler_insertLivePusher : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)checkMicroPhoneAuth:(id)a0;
- (void)innerHandlerJSEvent:(id)a0;
- (BOOL)checkCanSetAudioAcitve;

@end
