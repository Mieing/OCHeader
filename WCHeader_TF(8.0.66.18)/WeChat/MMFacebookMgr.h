@class NSString, FacebookAuth;

@interface MMFacebookMgr : MMUserService <MMServiceProtocol, IFacebookAuthExt, PBMessageObserverDelegate>

@property (retain, nonatomic) FacebookAuth *m_facebookAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)hasInitSDK;
- (id)getFacebookName;
- (BOOL)isFacebookBounded;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (void)tryBindFacebook;
- (void)tryConnectFacebook;
- (BOOL)tryExtendToken;
- (void)tryUnBindFacebook;
- (void)setFacebookUsageType:(long long)a0;
- (BOOL)needSetFacebookUsageType;
- (void)updateTokenToSvr;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(BOOL)a0;
- (void)onExtendTokenFinish:(BOOL)a0;
- (void)clearFacebookToken;
- (void)verifyAccessTokenValid:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
