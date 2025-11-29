@interface WAJSEventHandler_operateSmCrypto : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)getRandomBytes:(id)a0;
- (void)sm2Encrypt:(id)a0;
- (void)sm2Verify:(id)a0;
- (void)sm3:(id)a0;

@end
