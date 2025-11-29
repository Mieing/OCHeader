@interface EAccountCYJKeychain : NSObject

+ (void)deleteWithKey:(id)a0;
+ (id)getKeychainQuery:(id)a0;
+ (void)save:(id)a0 data:(id)a1;
+ (id)load:(id)a0;

@end
