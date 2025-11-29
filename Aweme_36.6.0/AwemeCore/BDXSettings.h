@interface BDXSettings : NSObject

+ (id)objectForKeyPath:(id)a0;
+ (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
+ (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
+ (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
+ (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
+ (id)bdxVersion;
+ (BOOL)boolForKeyPath:(id)a0 defaultValue:(BOOL)a1;
+ (long long)intForKeyPath:(id)a0 defaultValue:(long long)a1;

@end
