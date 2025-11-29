@interface AWESearchSmartFeature : NSObject

+ (id)fetchFeatureInfoWithConfigNoTryLockWithBizName:(id)a0 andKey:(id)a1;
+ (id)fetchFeatureInfoWithConfigNoTryLockWithBizName:(id)a0 andKeys:(id)a1;
+ (id)fetchFeatureInfoWithConfigNoTryLockWithFeatureFetchKeys:(id)a0;
+ (id)fetchFeatureInfoWithConfigTryLockWithBizName:(id)a0 andKey:(id)a1 tryLock:(BOOL *)a2;
+ (id)fetchFeatureInfoWithConfigTryLockWithBizName:(id)a0 andKeys:(id)a1 tryLock:(BOOL *)a2;
+ (id)fetchFeatureInfoWithConfigTryLockWithFeatureFetchKeys:(id)a0 tryLock:(BOOL *)a1;
+ (id)fetchFeatureInfoWithConfig:(id)a0;
+ (id)fetchFeatureInfoWithConfig:(id)a0 withTryLock:(BOOL *)a1;

@end
