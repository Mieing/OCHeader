@class NSString;

@interface UDRCryptoUtil : MMUserService <MMServiceProtocol> {
    NSString *ACCESS_RES_GROUP;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (id)getAESKeyInKeyChain:(id)a0 name:(id)a1 version:(unsigned int)a2;
- (void)saveAESKeyInKeyChain:(id)a0 projectId:(id)a1 name:(id)a2 version:(unsigned int)a3;
- (void)deleteAESKeyInKeyChain:(id)a0 name:(id)a1 version:(unsigned int)a2;
- (int)AesGcmDecrypt:(id)a0 nonce_size:(unsigned long long)a1 key:(id)a2 key_size:(unsigned long long)a3 aad:(id)a4 aad_size:(unsigned long long)a5 input:(id)a6 input_size:(unsigned long long)a7 tag:(id)a8 tag_size:(unsigned long long)a9 output:(void *)a10;
- (int)AesGcmEncrypt:(id)a0 nonce_size:(unsigned long long)a1 key:(id)a2 key_size:(unsigned long long)a3 aad:(id)a4 aad_size:(unsigned long long)a5 input:(id)a6 input_size:(unsigned long long)a7 output:(void *)a8 outtag:(void *)a9;
- (void).cxx_destruct;

@end
