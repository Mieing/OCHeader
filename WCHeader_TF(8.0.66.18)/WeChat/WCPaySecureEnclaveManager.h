@class NSRecursiveLock;

@interface WCPaySecureEnclaveManager : NSObject {
    NSRecursiveLock *m_lock;
}

@property (nonatomic) BOOL needChangeAuthKey;
@property unsigned long long currenScene;
@property int taskCount;

+ (id)shared;

- (id)initOnce;
- (id)getError:(long long)a0;
- (void)signatureData:(id)a0 context:(id)a1 callback:(id /* block */)a2;
- (void)updateAuthKey:(id)a0 cgiInstance:(id)a1 needReset:(BOOL)a2 callback:(id /* block */)a3;
- (void)updateAuthKey:(id)a0 cgiInstance:(id)a1 needReset:(BOOL)a2;
- (void)getChallenge:(int)a0 cgiInstance:(id)a1;
- (void)showTouchIDAuthView:(id)a0 withNeedSignString:(id)a1 disableFallBack:(BOOL)a2 whenSuccessData:(id /* block */)a3 whenFail:(id /* block */)a4;
- (void)reset;
- (int)biometryType;
- (id)getPayTag;
- (long long)resetSEKey;
- (void)startAuthKeyCgi:(id)a0 cgiInstance:(id)a1 pem:(id)a2;
- (void)report:(long long)a0 errCode:(long long)a1;
- (void).cxx_destruct;

@end
