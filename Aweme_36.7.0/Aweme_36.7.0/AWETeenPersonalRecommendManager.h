@class NSString;

@interface AWETeenPersonalRecommendManager : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)isPersonalRecommendSwitchOn;
- (id)personalRecommendSwitchParams;
- (void)setPersonalRecommendSwitch:(BOOL)a0;
- (void)fetchPrivacySetting;
- (BOOL)p_isPersonalRecommendSwitchOnForLogin;
- (void)setPersonalRecommendSwitch:(BOOL)a0 push:(BOOL)a1;
- (BOOL)p_isPersonalRecommendSwitchOnForLogout;
- (id)init;
- (void)dealloc;

@end
