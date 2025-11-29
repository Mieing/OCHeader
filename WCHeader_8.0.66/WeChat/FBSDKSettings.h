@class NSString, NSSet;

@interface FBSDKSettings : NSObject

@property (class, readonly, copy, nonatomic) NSString *sdkVersion;
@property (class, readonly, copy, nonatomic) NSString *defaultGraphAPIVersion;
@property (class, nonatomic) double JPEGCompressionQuality;
@property (class, nonatomic, getter=isAutoInitEnabled) BOOL autoInitEnabled;
@property (class, nonatomic, getter=isAutoLogAppEventsEnabled) BOOL autoLogAppEventsEnabled;
@property (class, nonatomic, getter=isCodelessDebugLogEnabled) BOOL codelessDebugLogEnabled;
@property (class, nonatomic, getter=isAdvertiserIDCollectionEnabled) BOOL advertiserIDCollectionEnabled;
@property (class, nonatomic, getter=shouldLimitEventAndDataUsage) BOOL limitEventAndDataUsage;
@property (class, nonatomic, getter=isGraphErrorRecoveryEnabled) BOOL graphErrorRecoveryEnabled;
@property (class, copy, nonatomic) NSString *appID;
@property (class, copy, nonatomic) NSString *appURLSchemeSuffix;
@property (class, copy, nonatomic) NSString *clientToken;
@property (class, copy, nonatomic) NSString *displayName;
@property (class, copy, nonatomic) NSString *facebookDomainPart;
@property (class, copy, nonatomic) NSSet *loggingBehaviors;
@property (class, copy, nonatomic) NSString *graphAPIVersion;

+ (void)initialize;
+ (id)_JPEGCompressionQualityNumber;
+ (void)_setJPEGCompressionQualityNumber:(id)a0;
+ (id)_autoInitEnabled;
+ (void)_setAutoInitEnabled:(id)a0;
+ (id)_autoLogAppEventsEnabled;
+ (void)_setAutoLogAppEventsEnabled:(id)a0;
+ (id)_advertiserIDCollectionEnabled;
+ (void)_setAdvertiserIDCollectionEnabled:(id)a0;
+ (id)_codelessDebugLogEnabled;
+ (void)_setCodelessDebugLogEnabled:(id)a0;
+ (void)enableLoggingBehavior:(id)a0;
+ (void)disableLoggingBehavior:(id)a0;
+ (id)accessTokenCache;
+ (void)setAccessTokenCache:(id)a0;
+ (id)userAgentSuffix;
+ (void)setUserAgentSuffix:(id)a0;
+ (id)appEventSettingsForPlistKey:(id)a0 defaultValue:(id)a1;
+ (id)appEventSettingsForUserDefaultsKey:(id)a0 defaultValue:(id)a1;
+ (void)logWarnings;
+ (void)_logIfSDKSettingsChanged;
+ (void)updateGraphAPIDebugBehavior;
+ (id)graphAPIDebugParamValue;

@end
