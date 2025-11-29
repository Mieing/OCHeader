@interface IESECABTest : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (id)valueForKey:(id)a0 defaultValue:(id)a1;
+ (id)hostCompatibleDictionaryForKey:(id)a0 defaultValue:(id)a1;
+ (long long)hostCompatibleIntegerForKey:(id)a0 defaultValue:(long long)a1;
+ (BOOL)overrideABSDKSettings:(id)a0;
+ (void)trackMonitorWithData:(id)a0 success:(BOOL)a1 errMsg:(id)a2 msgID:(id)a3;
+ (BOOL)overrideHostSettings:(id)a0;
+ (void)overrideABSDKSettingsWithKey:(id)a0 value:(id)a1 vid:(id)a2;
+ (void)overrideSettingsWithByteSyncData:(id)a0;
+ (id)valueForKey:(id)a0 forceExpose:(BOOL)a1 defaultValue:(id)a2;
+ (id)hostCompatibleValueForKey:(id)a0 defaultValue:(id)a1;
+ (id)hostCompatibleStringForKey:(id)a0 defaultValue:(id)a1;
+ (id)hostCompatibleArrayForKey:(id)a0 defaultValue:(id)a1;
+ (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (double)doubleForKey:(id)a0 defaultValue:(long long)a1;
+ (id)numberForKey:(id)a0 defaultValue:(id)a1;
+ (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
+ (id)arrayForKey:(id)a0 defaultValue:(id)a1;
+ (id)stringForKey:(id)a0 defaultValue:(id)a1;
+ (long long)integerForKey:(id)a0 defaultValue:(long long)a1;

@end
