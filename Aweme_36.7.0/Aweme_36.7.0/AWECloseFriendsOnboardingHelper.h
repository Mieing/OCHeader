@class NSString;

@interface AWECloseFriendsOnboardingHelper : NSObject <AWEUserMessage>

@property (nonatomic) BOOL isCompleteCloseFriendsOnboarding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)getCloseFriendsOnboardingFromStorage;
- (void)updateBizAccountDegradeWithTime:(long long)a0;
- (void)reloadSKIIOnboardingTimestamp;
- (void)updateSKIIOnboardingWithTime:(long long)a0;
- (void)didPrepareSettings;
- (id)getCompleteOnboardingKeyWithUserID:(id)a0;
- (BOOL)enableRelationUpgrade;
- (void)handleSettingsResponseDictionary:(id)a0;
- (void)updateCloseFriendsOnboardingWithSettingsDictionary:(id)a0;
- (id)init;
- (void)dealloc;

@end
