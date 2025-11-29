@interface TTInstallUtil : NSObject

+ (id)resolutionString;
+ (BOOL)isJailBroken;
+ (long long)carrierTypeWithIPV6;
+ (id)buildQueryFromDictionary:(id)a0;
+ (id)onTheFlyParameter;
+ (BOOL)isUpgradeUser;
+ (BOOL)isInHouseVersion;
+ (id)commonURLParameters;
+ (id)loadUserDefaultsStringForKey:(id)a0;
+ (id)carrierParameter;
+ (id)carrierParameterWithSystem;
+ (id)carrierParameterWithSystemOld;
+ (id)carrierParameterWithSystemNew;
+ (id)carrierParameterWithIPV6;
+ (void)generateMockDeviceInfo;
+ (void)setResetMode:(BOOL)a0;
+ (BOOL)isResetMode;
+ (void)setAutoReset:(BOOL)a0;
+ (BOOL)isAutoReset;
+ (void)clearAllUserDefaultsData;
+ (id)appName;
+ (void)load;
+ (id)channel;
+ (id)uuid;
+ (unsigned long long)authorizationStatus;
+ (id)platform;
+ (unsigned long long)sdkVersion;
+ (id)aid;

@end
