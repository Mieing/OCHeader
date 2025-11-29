@interface HMDURLSettings : NSObject

+ (id)fileUploadDefaultHosts;
+ (id)cloudCommandDownloadPath;
+ (id)cloudCommandUploadPath;
+ (id)bizExceptionUploadPathWithMultipleHeader;
+ (id)exceptionUploadPathWithMultipleHeader;
+ (id)exceptionUploadDefaultHosts;
+ (id)defaultHosts;
+ (id)highPriorityUploadPath;
+ (id)performanceUploadDefaultHosts;
+ (id)tracingUploadPathWithMultipleHeader;
+ (id)performanceUploadPath;
+ (id)userExceptionUploadPathWithMultipleHeader;
+ (id)userExceptionUploadDefaultHosts;
+ (id)crashEventUploadPath;
+ (id)crashUploadPath;
+ (id)crashUploadDefaultHosts;
+ (id)tracingUploadPath;
+ (id)exceptionUploadPath;
+ (id)userExceptionUploadPath;
+ (id)fileUploadPath;
+ (id)classCoverageUploadPath;
+ (id)memoryGraphUploadPath;
+ (id)evilMethodUploadPath;
+ (id)bizExceptionUploadPath;
+ (id)memoryInfoUploadPath;
+ (id)configFetchDefaultHosts;
+ (id)quotaStateCheckPath;
+ (id)configV5FetchPath;
+ (id)configFetchPath;
+ (id)memoryGraphUploadCheckPath;
+ (Class)_URLHostSettingsClass;
+ (id)customHostsForAppID:(id)a0;
+ (void)registerCustomHosts:(id)a0 forAppID:(id)a1;
+ (void)registerCustomHost:(id)a0 forAppID:(id)a1;
+ (id)memoryMatrixUploadPath;
+ (id)sessionUploadPath;
+ (id)registerServicePath;

@end
