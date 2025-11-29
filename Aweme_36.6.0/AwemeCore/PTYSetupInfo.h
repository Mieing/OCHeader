@class NSString, PTYURLSetting;

@interface PTYSetupInfo : NSObject

@property (copy, nonatomic) NSString *URLHost;
@property (copy, nonatomic) NSString *AuthentificationURLHost;
@property (copy, nonatomic) NSString *sdkAID;
@property (readonly, nonatomic) NSString *sdkBuildVersion;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL isEnableApplogPlugin;
@property (nonatomic) BOOL isEnableCustomApplogHook;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) id /* block */ deviceIDBlock;
@property (copy, nonatomic) id /* block */ userIDBlock;
@property (copy, nonatomic) id /* block */ settingsBlock;
@property (nonatomic) BOOL isDebugMode;
@property (nonatomic) double appStartTimestamp;
@property (retain, nonatomic) PTYURLSetting *customURLSetting;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (copy, nonatomic) id /* block */ attStatusBlock;
@property (nonatomic) BOOL flEnable;
@property (nonatomic) double flFirstReportStatusDelay;
@property (nonatomic) BOOL autoRequestUpdate;
@property (nonatomic) unsigned long long downloadConcurrency;
@property (nonatomic) BOOL idleDownloadEnable;
@property (nonatomic) unsigned long long cleanStrategy;
@property (nonatomic) unsigned long long setupMode;
@property (nonatomic) unsigned long long pyConcurrency;
@property (copy, nonatomic) id /* block */ pyBindCallback;
@property (copy, nonatomic) id /* block */ minpyBindCallback;
@property (nonatomic) unsigned long long cepMode;
@property (nonatomic) BOOL isReviewing;
@property (nonatomic) BOOL enableResourcePolicyCheck;
@property (copy, nonatomic) id /* block */ llmTaskCallback;

+ (Class)GetSetting;

- (BOOL)loadSetting;
- (BOOL)loadModuleConfigFromSettings;
- (void).cxx_destruct;
- (id)init;

@end
