@interface AWELockOptABSettings : NSObject

+ (BOOL)lockDetectionEnabled;
+ (BOOL)semaphoreLockCheckEnabled;
+ (BOOL)executeWhenAnrEnabled;
+ (int)executeAnrLevel;
+ (id)lockDetectionOptConfig;
+ (BOOL)mainThreadPriorityDownEnabled;
+ (int)mainThreadPriorityDownValue;
+ (BOOL)mainThreadPriorityUpEnabled;
+ (int)mainThreadPriorityUpValue;
+ (int)lockThreadPriorityUpValue;
+ (BOOL)trackEnabled;

@end
