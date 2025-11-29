@class NSString, NSMutableArray, NSData;

@interface BDTGPrivateKeyManager : NSObject {
    struct __SecKey { } *_innerPrivateKey;
    NSString *_innerPublicKeyBase64;
    NSData *_innerEcdhKey;
    BOOL _isLoading;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _privateKeyLoadMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _publicKeyLoadMutex;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _ecdhKeyLoadLock;
    long long _loadTimes;
}

@property (retain, nonatomic) NSMutableArray *loadCompletionBlocks;
@property (nonatomic) long long isFromCache;
@property (readonly, copy, nonatomic) NSString *keyType;
@property (readonly, nonatomic) BOOL isPrivateKeyReady;

- (struct __SecKey { } *)privateKeyWithTimeout:(double)a0;
- (void)loadPrivateKeyWithScene:(id)a0 completion:(id /* block */)a1;
- (struct __SecKey { } *)safeGetPrivateKey;
- (struct __SecKey { } *)privateKeyWithTimeout:(double)a0 error:(id *)a1;
- (struct __SecKey { } *)p_loadPrivateKey;
- (void)safeSetPrivateKey:(struct __SecKey { } *)a0;
- (void)getPrivateKeyDidFail;
- (id)publicKeyBase64;
- (id)ecdhKey;
- (id)ecdhKey:(id *)a0;
- (struct __SecKey { } *)privateKeySync;
- (void)trackGenerateEcdhKeyFail:(id)a0;
- (void)getPrivateKeyDidSuccess:(struct __SecKey { } *)a0;
- (void)preloadPublicKeyBase64Async;
- (void)preloadECDHKeyAsync;
- (void).cxx_destruct;
- (id)init;

@end
