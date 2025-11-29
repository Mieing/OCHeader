@interface AWEUGXTabOOMProtection : NSObject

+ (void)oomCrashDidFinishDetectWithNotification:(id)a0;
+ (void)setXTabPageShowing:(BOOL)a0 activityId:(id)a1;
+ (void)markXTabHMDCustomFilterValuePageShowing:(BOOL)a0 activityId:(id)a1;
+ (void)clearOOMTimesWithActivityId:(id)a0;
+ (void)markDowngrade:(BOOL)a0;
+ (BOOL)hitOOMProtectionWithActivityId:(id)a0;
+ (BOOL)enableXTabOOMProtectionWithActivityId:(id)a0;
+ (id)versionActivityId:(id)a0;
+ (BOOL)private_hitOOMProtectionWithActivityId:(id)a0;
+ (id)oomProtectionConfigWithActivityId:(id)a0;
+ (void)setHMDCustomFilterValue:(id)a0 forKey:(id)a1;
+ (void)initialize;

@end
