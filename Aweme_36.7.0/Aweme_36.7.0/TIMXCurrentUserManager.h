@class NSString, NSTimer, TIMXSDKInstance;

@interface TIMXCurrentUserManager : NSObject <TIMXCurrentUserCredentialProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long currentAccountID;
@property (copy, nonatomic) NSString *currentAccountSecID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) int configID;
@property double currentAccountLoginTimestamp;
@property BOOL tokenInvalidNotified;
@property (retain, nonatomic) NSTimer *tokenRefreshTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appEnterForeground:(id)a0;
- (void)invalidateCurrentToken;
- (long long)getConversationCountAtUserLastLogout;
- (void)recordConversationCountAtUserLogout:(long long)a0 forUser:(long long)a1;
- (void)refreshTimerFired:(id)a0;
- (void)__tryToStartDBBatchUpdateTaskWithUid:(id)a0;
- (void)generateNewIdentityTokenCompletion:(id /* block */)a0;
- (void)regenerateToken;
- (void)loginWithToken:(id)a0 accountID:(long long)a1 accountSecID:(id)a2;
- (void)loginWithToken:(id)a0 accountID:(long long)a1 accountSecID:(id)a2 configID:(int)a3;
- (void)logoutWithClearDB:(BOOL)a0;
- (void)logout;
- (void).cxx_destruct;
- (void)updateToken:(id)a0;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
