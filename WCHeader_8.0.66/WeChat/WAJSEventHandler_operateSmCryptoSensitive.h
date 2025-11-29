@interface WAJSEventHandler_operateSmCryptoSensitive : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)sm2GenKeyPair;
- (void)sm2GenPublicKey:(id)a0;
- (void)sm2Decrypt:(id)a0;
- (void)sm2Sign:(id)a0;
- (void)sm3Hmac:(id)a0;
- (void)sm4EncryptCBC:(id)a0;
- (void)sm4DecryptCBC:(id)a0;
- (void)sm4EncryptGCM:(id)a0;
- (void)sm4DecryptGCM:(id)a0;
- (void)sm4EncryptCTR:(id)a0;
- (void)sm4DecryptCTR:(id)a0;

@end
