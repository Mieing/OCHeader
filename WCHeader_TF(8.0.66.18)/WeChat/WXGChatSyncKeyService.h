@class NSString;

@interface WXGChatSyncKeyService : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSString *publicKey;
@property (retain, nonatomic) NSString *privateKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getSyncPublicKey;
- (id)getPublicKeyString;
- (id)getPrivateKeyString;
- (void)genRsaKeyPair;
- (void).cxx_destruct;

@end
