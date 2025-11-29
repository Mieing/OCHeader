@class DIRSComplianceConfiguration, NSString, NSDictionary, NSMutableDictionary, DIRSEventConfiguration, DIRSObserver, NSMutableSet;
@protocol IRISEndpoint;

@interface DIRSConfig : NSObject

@property (nonatomic) BOOL encryptionUsingBDEnc;
@property (nonatomic) BOOL historicalEventBatchEnabled;
@property (nonatomic) long long historicalComponent;
@property (nonatomic) BOOL isInternalApplication;
@property (nonatomic) BOOL legacyPropertiesFormatterEnabled;
@property (nonatomic) BOOL propertiesFormatterEnabled;
@property (nonatomic) BOOL deviceInstallEnabled;
@property (nonatomic) BOOL isAutoActivated;
@property (nonatomic) BOOL usingTTNetwork;
@property (nonatomic) BOOL verificationEnabled;
@property (retain, nonatomic) NSString *verificationEndpoint;
@property (nonatomic) BOOL parameterBlockEnabled;
@property (copy, nonatomic) id /* block */ configureUserBlock;
@property (copy, nonatomic) id /* block */ configureABTestingExperimentsBlock;
@property (copy, nonatomic) id /* block */ configureGlobalPropertiesBlock;
@property (readonly) BOOL verificationEnabled;
@property (readonly) NSString *verificationEndpoint;
@property (readonly) BOOL sentryEnabled;
@property (readonly) unsigned long long sentrySamplingRate;
@property (readonly) NSDictionary *sentryOptions;
@property (retain) DIRSComplianceConfiguration *compliance;
@property (retain) DIRSEventConfiguration *event;
@property (retain) DIRSObserver *observer;
@property (retain, nonatomic) NSMutableDictionary *extensionSettings;
@property (retain, nonatomic) NSMutableSet *registerClasses;
@property (retain, nonatomic) NSMutableSet *disabledModules;
@property (nonatomic) BOOL verificationEnabled;
@property (copy, nonatomic) NSString *verificationEndpoint;
@property (nonatomic) BOOL sentryEnabled;
@property (nonatomic) unsigned long long sentrySamplingRate;
@property (retain, nonatomic) NSDictionary *sentryOptions;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *appGroupId;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *subId;
@property (retain, nonatomic) NSDictionary *launchOptions;
@property (nonatomic) BOOL encryptionEnabled;
@property (retain, nonatomic) id<IRISEndpoint> endpoint;
@property (nonatomic) long long logLevel;
@property (copy, nonatomic) id /* block */ configureUserLoggerBlock;
@property (copy, nonatomic) id /* block */ configureHTTPHeaderFieldsBlock;
@property (copy, nonatomic) id /* block */ configureCommonParametersBlock;
@property (copy, nonatomic) id /* block */ configureCustomHeaderBlock;
@property (copy, nonatomic) id /* block */ onError;

+ (id)configWithIdentifier:(id)a0 launchOptions:(id)a1;

- (void)unregisterModule:(Class)a0;
- (void)applyPlugins;
- (id)registeredModules;
- (void)disableModule:(id)a0;
- (id)disabledModuleIds;
- (id)batchPriority;
- (void).cxx_destruct;
- (id)uniqueKey;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void)applySettings:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)registerModule:(Class)a0;

@end
