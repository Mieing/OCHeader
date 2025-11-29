@class NSDictionary, NSString;

@interface AWEFamiliarSettingsManager : NSObject <AWESettingsComboRequestProtocol, AWEUserMessage>

@property (copy, nonatomic) NSDictionary *currentSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (void)updateSettingsFailedWithStatusCode:(long long)a0;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (id)cachedSettings;
+ (void)cacheSettings:(id)a0;
+ (void)updateSettingsWithDictionary:(id)a0 fromRequest:(BOOL)a1;
+ (void)loadCachedSettings;
+ (Class)aAFDInterestSocialAdapterClass;
+ (id)sharedInstance;
+ (id)subscribers;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)aAFDInterestSocialAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
