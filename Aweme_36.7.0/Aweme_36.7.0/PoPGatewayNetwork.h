@class NSOperationQueue, NSMutableArray, NSString;

@interface PoPGatewayNetwork : NSObject {
    NSOperationQueue *queue;
    NSString *_secertKey;
    NSString *_acesskeyId;
    NSString *_cerityIdAsKey;
    NSString *_cerityIdACKey;
}

@property (retain, nonatomic) NSMutableArray *backupHosts;
@property (nonatomic) double timeoutForInit;
@property (nonatomic) double timeoutForVerify;

+ (id)getIPAddressWithHost:(id)a0;
+ (id)getAddressFromArray:(struct __CFArray { } *)a0;

- (id)dictionaryToJson:(id)a0;
- (id)urlEncode:(id)a0;
- (void)resetBackupHostEnv;
- (void)configFirstChoiceHost;
- (id)nextAttemptHost:(id)a0;
- (void)prepareBackupHosts;
- (id)formatIso8601Date;
- (BOOL)isPRE;
- (id)addValue:(id)a0 forKey:(id)a1 to:(id)a2;
- (void)doPOPRequest:(id)a0 action:(id)a1 param:(id)a2 ak:(id)a3 sk:(id)a4 completionBlock:(id /* block */)a5;
- (id)changeFirstword:(id)a0;
- (id)computeSignature:(id)a0 secret:(id)a1;
- (void)httpPost:(id)a0 action:(id)a1 extraHeader:(id)a2 param:(id)a3 ak:(id)a4 sk:(id)a5 completionBlock:(id /* block */)a6;
- (id)getSignature:(id)a0 data:(id)a1;
- (void)verifySendContent:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendOCRContent:(id)a0 completionBlock:(id /* block */)a1;
- (void)bizSendContent:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendLogContent:(id)a0 extraHeader:(id)a1 completionBlock:(id /* block */)a2;
- (void)sendInitFaceVerifyContent:(id)a0 keyName:(id)a1 initKey:(id)a2 initSimpleValue:(id)a3 completionBlock:(id /* block */)a4;
- (id)getBackupServerAddress;
- (id)aes256_decryptKey:(id)a0 withData:(id)a1;
- (id)aes256_decryptKey:(id)a0 withSource:(id)a1;
- (id)getPreHost;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)encode:(id)a0;
- (id)getServerAddress;

@end
