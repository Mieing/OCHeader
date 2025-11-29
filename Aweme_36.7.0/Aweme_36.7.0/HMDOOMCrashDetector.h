@interface HMDOOMCrashDetector : NSObject

@property (class) double systemStateUpdateInterval;

+ (void)updateConfig:(id)a0;
+ (void)triggerCurrentEnvironmentInformationSavingWithAction:(id)a0;
+ (BOOL)findOrCreateDirectoryInPath:(id)a0;
+ (void)triggerCurrentEnvironmentInformationSaving;
+ (id)logFileDictionary;
+ (void)triggerCurrentEnvironmentInfomationSaving;
+ (void)triggerCurrentEnvironmentInfomationSavingWithAction:(id)a0;
+ (void)stop;
+ (void)start;
+ (void)startWithDelegate:(id)a0;

@end
