@interface AWEDiskUsageDetectionTools : NSObject

+ (void)insertDiskCleanGuideVideoIfNeeded;
+ (void)markDiskCleanGuideVideoInsertedForIDIfNeeded:(id)a0;
+ (BOOL)checkIfDiskCleanVideoForAwemeID:(id)a0;
+ (void)configTouchMenuForDiskClean:(id /* block */)a0;
+ (BOOL)isAlertShowing;
+ (long long)defaultDiskFreeSpaceValue;
+ (long long)defaultAppUsageDiskValue;
+ (BOOL)enableLowSpaceDetection;
+ (BOOL)shouldCheckDiskSpace;
+ (long long)getDefaultDiskFreeSpaceValue;
+ (long long)getDefaultAppUsageDiskValue;
+ (void)monitorOutOfSpace:(BOOL)a0 isWriteError:(BOOL)a1;
+ (void)monitorOutOfSpace:(BOOL)a0;
+ (void)checkDiskSpaceWithCompletion:(id /* block */)a0;
+ (void)checkDiskFreeSpaceAvailable;
+ (void)checkErrorInfo:(id)a0;

@end
