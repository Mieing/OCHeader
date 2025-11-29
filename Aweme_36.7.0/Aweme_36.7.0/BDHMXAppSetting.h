@interface BDHMXAppSetting : NSObject

+ (id)objectForKeyPath:(id)a0;
+ (BOOL)boolValueForKey:(id)a0 defaultVal:(BOOL)a1;
+ (long long)integerValueForKey:(id)a0 defaultVal:(long long)a1;
+ (double)floatValueForKey:(id)a0 defaultVal:(double)a1;
+ (double)doubleValueForKey:(id)a0 defaultVal:(double)a1;
+ (id)stringValueForKey:(id)a0 defaultVal:(id)a1;
+ (id)arrayValueForKey:(id)a0 defaultVal:(id)a1;
+ (id)dictionaryValueForKey:(id)a0 defaultVal:(id)a1;

@end
