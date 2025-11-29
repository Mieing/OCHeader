@class NSError;

@interface WAJSEventHandler_operateSmStorage : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSError *err;

- (void)handleJSEvent:(id)a0;
- (void)endByError:(id)a0;
- (void)operate_generateSm4Key:(id)a0;
- (void)operate_importSm4Key:(id)a0;
- (void)operate_exportSm4Key:(id)a0;
- (void)operate_updateSm4Key:(id)a0;
- (void)operate_deleteSm4Key:(id)a0;
- (void)operate_checkSm4Key:(id)a0;
- (void)operate_generateSm2KeyPair:(id)a0;
- (void)operate_importSm2PublicKey:(id)a0;
- (void)operate_exportSm2PublicKey:(id)a0;
- (void)operate_updateSm2PublicKey:(id)a0;
- (void)operate_deleteSm2PublicKey:(id)a0;
- (void)operate_checkSm2PublicKey:(id)a0;
- (void)operate_importSm2PrivateKey:(id)a0;
- (void)operate_exportSm2PrivateKey:(id)a0;
- (void)operate_updateSm2PrivateKey:(id)a0;
- (void)operate_deleteSm2PrivateKey:(id)a0;
- (void)operate_checkSm2PrivateKey:(id)a0;
- (void)operate_sm4EcbEncrypt:(id)a0;
- (void)operate_sm4EcbDecrypt:(id)a0;
- (void)operate_sm4CbcEncrypt:(id)a0;
- (void)operate_sm4CbcDecrypt:(id)a0;
- (void)operate_sm4CtrEncrypt:(id)a0;
- (void)operate_sm4CtrDecrypt:(id)a0;
- (void)operate_sm4GcmEncrypt:(id)a0;
- (void)operate_sm4GcmDecrypt:(id)a0;
- (void)operate_sm2Encrypt:(id)a0;
- (void)operate_sm2Decrypt:(id)a0;
- (void)operate_sm2Sign:(id)a0;
- (void)operate_sm2Verify:(id)a0;
- (void).cxx_destruct;

@end
