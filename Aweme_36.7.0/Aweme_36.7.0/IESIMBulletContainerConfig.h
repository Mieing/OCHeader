@interface IESIMBulletContainerConfig : NSObject

+ (BOOL)enablePendingJSTask;
+ (id)p_bulletContainerConfig;
+ (BOOL)p_reusePoolEnable;
+ (long long)bulletContainerReusePlan;
+ (id)p_reuseAllowedList;
+ (id)p_preloadAllowedList;
+ (id)p_reuseForbiddenList;
+ (id)p_preloadForbiddenList;
+ (unsigned long long)p_reusePoolMemoryCostLimit;
+ (long long)p_reusePoolCountLimit;
+ (long long)p_reusePoolTotalSize;
+ (long long)p_reusePoolSingleListCountLimit;
+ (double)p_reusePoolAgeLimit;
+ (long long)p_memoryClearTime;
+ (BOOL)p_memoryClearWhenEnterBackground;
+ (BOOL)p_preloadEnable;
+ (id)p_preLayoutDisabledList;
+ (long long)p_preloadSearchSize;
+ (long long)p_preloadSearchSizeForFirstLoad;
+ (long long)p_preloadCardMaxCount;
+ (id)p_bulletContainerSchemaAppendStrategyModified;
+ (long long)bulletContainerReusePoolOption;
+ (long long)preloadSearchSize;
+ (long long)preloadCardMaxCount;
+ (BOOL)enableGlobalReusePool;
+ (BOOL)reusePoolEnableWithBulletScene:(id)a0;
+ (id)reuseAllowedList;
+ (id)preloadAllowedList;
+ (id)reuseForbiddenList;
+ (id)preloadForbiddenList;
+ (unsigned long long)reusePoolMemoryCostLimit;
+ (long long)reusePoolCountLimit;
+ (long long)reusePoolTotalSize;
+ (long long)reusePoolSingleListCountLimit;
+ (double)reusePoolAgeLimit;
+ (long long)memoryClearTime;
+ (BOOL)memoryClearWhenEnterBackground;
+ (BOOL)preloadEnableWithBulletScene:(id)a0;
+ (id)preLayoutDisabledList;
+ (long long)preloadSearchSizeForFirstLoad;
+ (id)bulletContainerSchemaAppendStrategy;
+ (BOOL)enableReloadWithSchemaOpt;

@end
