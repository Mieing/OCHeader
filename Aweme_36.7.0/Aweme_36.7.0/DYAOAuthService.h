@class BDUGFlowAuthToken;

@interface DYAOAuthService : NSObject

@property (retain, nonatomic) BDUGFlowAuthToken *authToken;

+ (void)startOAuthForPlatform:(unsigned long long)a0 type:(unsigned long long)a1 configuration:(id)a2 completion:(id /* block */)a3;
+ (id)OAuthForLoginTask:(unsigned long long)a0;
+ (id)OAuthForBindTask:(unsigned long long)a0;
+ (id)OAuthForAccessTokenTask:(unsigned long long)a0 configuration:(id)a1;
+ (void)trackEvent:(id)a0 params:(id)a1 platform:(unsigned long long)a2;
+ (BOOL)OAuthAvailable:(unsigned long long)a0;
+ (BOOL)isAppInstalled:(unsigned long long)a0;
+ (id)sharedInstance;

- (void)appDidEnterForeground;
- (void).cxx_destruct;
- (id)init;

@end
