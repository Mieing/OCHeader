@class NSDictionary, GIDMDMPasscodeState, NSDate;

@interface GIDMDMPasscodeCache : NSObject {
    BOOL _hasLocalAuthentication;
    NSDictionary *_localAuthenticationInfo;
    BOOL _hasEnteredBackground;
    BOOL _hasKeychain;
    NSDictionary *_keychainInfo;
    NSDate *_keychainExpireTime;
    GIDMDMPasscodeState *_cachedState;
}

+ (id)sharedInstance;

- (BOOL)hasLocalAuthentication;
- (BOOL)hasKeychain;
- (void)obtainKeychainInfo;
- (void)obtainLocalAuthenticationInfo;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)status;
- (id)info;
- (id)passcodeState;

@end
