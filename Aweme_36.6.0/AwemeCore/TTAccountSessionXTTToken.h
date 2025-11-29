@class NSString, NSMutableArray, NSArray;

@interface TTAccountSessionXTTToken : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _xTTTokenLock;
}

@property (class, readonly, nonatomic) BOOL hasSetCsrfToken;

@property (nonatomic) BOOL firstBeat;
@property (copy, nonatomic) NSString *x_tt_token;
@property (nonatomic) BOOL hasSendSessionExpired;
@property (nonatomic) BOOL isTokenBeatting;
@property (retain, nonatomic) NSMutableArray *xTokenUpdateAfterActionBlocks;
@property (retain, nonatomic) NSMutableArray *xTokenSetToRequestAfterActionBlocks;
@property (nonatomic) BOOL isHandlingSessionExpired;
@property (copy, nonatomic) NSString *passporMFAToken;
@property (copy) NSString *lastSameUserToken;
@property (copy, nonatomic) NSString *csrfToken;
@property (retain) NSArray *shareCookieHostArray;

+ (BOOL)isAllowedDomainWithURL:(id)a0;
+ (BOOL)setXTokenWithResponse:(id)a0 responseError:(id)a1 request:(id)a2 sessionHasExpired:(BOOL)a3;
+ (BOOL)setXTokenWithResponse:(id)a0 responseError:(id)a1 request:(id)a2 sessionHasExpired:(BOOL)a3 data:(id)a4;
+ (void)handleLostConnectionMessageWithDictionary:(id)a0;
+ (void)wapLoginSuccessRefreshToken;
+ (BOOL)setXTokenWithResponse:(id)a0 responseError:(id)a1 sessionHasExpired:(BOOL)a2;
+ (BOOL)isDeviceTransfer:(id)a0 responseError:(id)a1;
+ (void)deviceTransferClearLocalUserInfo:(long long)a0;
+ (void)standardShowAlertAndLogout:(id)a0 newError:(id)a1 scene:(long long)a2 dispatchUserInfo:(id)a3;
+ (void)trackDeviceTransfer:(id)a0;
+ (id)xttTokenLocation;
+ (id)csrfTokenLocation;
+ (void)tokenBeatWithScene:(long long)a0 completion:(id /* block */)a1;
+ (void)tokenBeatByPolling;
+ (id)tokenBeatSceneStringFrom:(long long)a0;
+ (void)handleTokenBeatSessionExpired:(id)a0 jsonObj:(id)a1 error:(id)a2 scene:(long long)a3 dispatchUserInfo:(id)a4;
+ (void)addXTokenToRequest:(id)a0;
+ (void)checkDeviceTransferIfNeeded:(id)a0;
+ (void)reportLoginTokenEmpty:(id)a0;
+ (id)tokenBeatErrorNameWithData:(id)a0;
+ (BOOL)sessionExpiredWithErrorName:(id)a0;
+ (void)trackTokenBeatIfUidMixed:(id)a0 response:(id)a1 errorName:(id)a2;
+ (id)accountConfTokenHostArray;
+ (void)handleLostConnectionMessageWithData:(id)a0;
+ (void)userMixedRequestAccountIfNeeded:(id)a0 responseSecUid:(id)a1 scene:(id)a2;
+ (void)trackCsrfToken;
+ (void)tokenBeatAfterLaunching;
+ (id)shared;

- (void)handleLostConnectionMessageWithDictionary:(id)a0;
- (void)handleResponseFilterSessionExpiredWithResponse:(id)a0 request:(id)a1 sessionCheckedCallback:(id /* block */)a2;
- (void)handleResponseFilterSessionExpiredWithResponse:(id)a0 sessionCheckedCallback:(id /* block */)a1;
- (void)saveHeadersFromResponse:(id)a0;
- (void)wrLockXTTTokenLock;
- (void)unlockXTTTokenLock;
- (void)p_loadXTTTokenFromCache;
- (void)sessionSDKStatusChange;
- (void)p_saveXTTTokenToCache:(id)a0;
- (void)tokenBeatWithScene:(long long)a0 dispatchUserInfo:(id)a1 completion:(id /* block */)a2;
- (void)tokenBeatWithScene:(long long)a0 dispatchUserInfo:(id)a1 sessionCheckedCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (id)tokenBeatHeaderFiled;
- (void)handleTokenBeatResponse:(id)a0 jsonObj:(id)a1 error:(id)a2 scene:(long long)a3 dispatchUserInfo:(id)a4 sessionCheckedCallback:(id /* block */)a5;
- (void)cleanToken;
- (void)addXTokenToRequest:(id)a0;
- (void)saveMFAVerifyTokenWithResponIfNeededFixVersion:(id)a0 request:(id)a1;
- (void)saveMFAVerifyTokenWithResponIfNeeded:(id)a0 request:(id)a1;
- (BOOL)shouldSaveXTokenFromResponse:(id)a0;
- (BOOL)setXToken:(id)a0 scene:(id)a1 request:(id)a2 response:(id)a3;
- (void)p_removeXTTTokenInCache;
- (void)handleLostConnectionMessageWithData:(id)a0;
- (void)trackFrontierMessageReceive:(id)a0;
- (void)trackFrontierMessageError:(id)a0;
- (BOOL)setXToken:(id)a0 tokenSign:(id)a1 scene:(id)a2;
- (void)wapLoginClearToken;
- (void)rdLockXTTTokenLock;
- (void)addXTokenSetToRequestAfterActionBlock:(id /* block */)a0;
- (void)addXTokenUpdateAfterActionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
