@interface Keychain : NSObject

+ (id)getKeychainQuery:(id)a0;
+ (id)getValueForKey:(id)a0 class:(Class)a1;
+ (BOOL)deleteValueForKey:(id)a0;
+ (BOOL)saveValue:(id)a0 forKey:(id)a1;

@end
