@interface AWESupportUnifyAIGCEditLoadingABConfig : NSObject

+ (BOOL)isSupportAiprocess:(id)a0;
+ (BOOL)getSupportUnifyAigcEditLoading;
+ (long long)getHighConsuming;
+ (long long)getLowConsumingWithLoraType:(id)a0;
+ (long long)getLowConsuming;
+ (long long)getTemplateLowConsuming;
+ (long long)getTemplateHighConsuming;
+ (long long)getTemplateConsuming;
+ (long long)getPollingConfigAsyncInterval;
+ (long long)getPollingConfigSyncInterval;
+ (long long)getTemplatePollingConfigSyncInterval;
+ (long long)getTemplatePollingConfigAsyncInterval;

@end
