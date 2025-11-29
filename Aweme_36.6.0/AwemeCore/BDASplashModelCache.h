@interface BDASplashModelCache : NSObject

+ (void)updateStopSplashWithModel:(id)a0 method:(id)a1;
+ (void)updateStopSplashWithAdIds:(id)a0;
+ (void)clearAllModels;
+ (void)clearFirstLaunchModels;
+ (id)getAllSplashModels;
+ (id)getModelsWithKey:(id)a0;
+ (BOOL)timeIntervalIsLessOrEqualToday:(double)a0;
+ (id)managerModelsKeyData;
+ (void)setManagerModelsObject:(id)a0;
+ (BOOL)shouldBeStopOnTimeIntervals:(id)a0 model:(id)a1;
+ (void)updateSplashModels:(id)a0;
+ (void)updateLocalFirstLaunchModelsWithSplashModels:(id)a0;
+ (id)getFirstLaunchSplashModels;

@end
