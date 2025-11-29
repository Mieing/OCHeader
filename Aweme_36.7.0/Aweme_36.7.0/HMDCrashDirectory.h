@interface HMDCrashDirectory : NSObject

+ (void)setupUUID;
+ (void)setupDirectory;
+ (void)setupCurrentFolder;
+ (id)lastTimeDirectory;
+ (id)activeDirectory;
+ (id)eventDirectory;
+ (BOOL)checkAndMarkLaunchState;
+ (BOOL)lastTimeCrash;
+ (id)preparedDirectory;
+ (BOOL)isUrgent;
+ (void)removeLaunchState;
+ (id)processingDirectory;
+ (id)currentDirectory;
+ (id)UUID;
+ (id)baseDirectory;
+ (void)setup;

@end
