@class UTSafeDictionary, UTTracker;

@interface UTAnalytics : NSObject {
    UTTracker *mDefaultTracker;
    UTSafeDictionary *mTrackers;
}

+ (void)setDailyEnvironment;
+ (void)turnOnDev2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)getInstance;

- (void)setRequestAuthentication:(id)a0;
- (void)setAppKey4SDK:(id)a0 secret:(id)a1;
- (id)getTracker:(id)a0;
- (void)setDefaultAppKeyAndSecret;
- (void)loadConfigMgr;
- (void)setAppKey4APP:(id)a0 secret:(id)a1 authcode:(id)a2 securitySign:(BOOL)a3;
- (void)setAppkey4SDK:(id)a0 secret:(id)a1 authcode:(id)a2 securitySign:(BOOL)a3;
- (void)turnOnDebug;
- (void)setAppKey4APP:(id)a0 authcode:(id)a1;
- (void)setAppKey:(id)a0 secret:(id)a1;
- (void)setAppKey4SDK:(id)a0 authcode:(id)a1;
- (void)updateUserAccount:(id)a0 userid:(id)a1;
- (void)userRegister:(id)a0;
- (void)updateSessionProperties:(id)a0;
- (id)getTracker4SDK:(id)a0;
- (void)turnOnDev;
- (void)onCrashHandler;
- (void)turnOffCrashHandler;
- (void)setCrashCaughtListener:(id)a0;
- (id)getDefaultTracker;
- (void).cxx_destruct;
- (void)setAppVersion:(id)a0;
- (void)setChannel:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
