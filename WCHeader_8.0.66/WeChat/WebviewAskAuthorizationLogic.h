@class WebviewAuthorizationCache, NSString, NSMutableArray, WebviewAuthorizationInfo;

@interface WebviewAskAuthorizationLogic : MMObject <PBMessageObserverDelegate> {
    WebviewAuthorizationCache *_authCache;
    NSMutableArray *_needCheckQueue;
    WebviewAuthorizationInfo *_willSetScopeInfo;
    NSMutableArray *_willSetScopeList;
    NSString *_alertTitle;
    BOOL _isQueueHandling;
}

- (void)dealloc;
- (id)init;
- (void)updateScopeInfoList:(id)a0;
- (void)askAuthInfo:(id)a0;
- (void)askSvrAuthInfo:(id)a0;
- (void)askUserAuthInfo:(id)a0;
- (void)checkScopeAuthInfo;
- (void)onCheckScopeReq:(id)a0 scopeResp:(id)a1 authInfo:(id)a2;
- (void)setScopeAuthInfo:(id)a0 scopeInfoList:(id)a1;
- (void)onSetScopeReq:(id)a0 scopeResp:(id)a1;
- (unsigned int)structCGI:(id)a0 withType:(unsigned int)a1 withUserData:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)getScopeListStrFromArray:(id)a0;
- (void).cxx_destruct;

@end
