@class NSString;

@interface AWEInfraConfigModuleService : HTSService <AWEInfraConfigModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;

- (void)startTrackerService;
- (BOOL)isTrackerConfigured;
- (BOOL)enablePitaya;
- (void)startPitaya;
- (id)getAppleStoreChannelID;
- (long long)getUniversalCleanTypeWithExposure:(BOOL)a0;
- (id)getUniversalCleanTitle;
- (BOOL)isUniversalCleanNewIcon;
- (id)getExtremelyViewModelForExternalCacheCleanWithIgnoreALog:(BOOL)a0 diskOverallCalculateProgress:(id /* block */)a1 overallCalculateCompletion:(id /* block */)a2 businessCalculateCompletion:(id /* block */)a3;
- (id)aAWEInfraConfigModuleServiceCommonAdapter;

@end
