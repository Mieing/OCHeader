@interface IESIMUnavailableRefactorConfig : NSObject

+ (BOOL)enableRefactor;
+ (long long)convPollingTime;
+ (BOOL)disableRemoveCacheForMemoryWarning;
+ (long long)awemeMemorySize;
+ (long long)unavailableStateMemorySize;
+ (long long)awemeInfoExpiredTime;
+ (long long)unavailableExpiredTime;
+ (id)sharedConfig;

@end
