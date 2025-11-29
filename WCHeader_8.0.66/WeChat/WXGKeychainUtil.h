@interface WXGKeychainUtil : NSObject

+ (id)createKeychainQueryWithAccount:(id)a0 service:(id)a1;
+ (BOOL)savePassword:(id)a0 forAccount:(id)a1 service:(id)a2;
+ (id)findPasswordForAccount:(id)a0 service:(id)a1;
+ (BOOL)updatePassword:(id)a0 forAccount:(id)a1 service:(id)a2;
+ (BOOL)deletePasswordForAccount:(id)a0 service:(id)a1;

@end
