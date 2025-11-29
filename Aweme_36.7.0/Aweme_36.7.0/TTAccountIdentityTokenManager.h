@class NSString, NSMutableArray, NSTimer;

@interface TTAccountIdentityTokenManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _processTokenMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _identityTokenLock;
}

@property (nonatomic) BOOL isRequestToken;
@property (retain, nonatomic) NSMutableArray *getTokenCallbacks;
@property (copy, nonatomic) NSString *identityToken;
@property (nonatomic) long long tokenRefreshSystemUpTime;
@property (retain, nonatomic) NSTimer *refreshTimer;

+ (BOOL)isRetryRequest:(long long)a0;
+ (id)convertSceneToString:(long long)a0;
+ (id)sharedInstance;

- (void)accountSwitchRefreshToken:(id)a0;
- (id)safeGetIdentityTokenJson;
- (id)formatJsonTokenResult:(id)a0;
- (void)cancleRunloop;
- (void)requestIdentityTokenIfNeeded:(long long)a0 enterFrom:(id)a1 callback:(id /* block */)a2;
- (void)loopRefreshToken;
- (void)requestIdentityToken:(long long)a0 enterFrom:(id)a1;
- (void)trackGetIdentityToken:(BOOL)a0 token:(id)a1 scene:(long long)a2 code:(long long)a3 message:(id)a4 enterFrom:(id)a5 response:(id)a6;
- (void)notifyGetTokenCallbacks:(id)a0 errorCode:(long long)a1;
- (void)getIdentityToken:(long long)a0 enterFrom:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
