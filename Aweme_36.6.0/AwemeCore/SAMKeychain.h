@interface SAMKeychain : NSObject

+ (id)cj_stringForKey:(id)a0;
+ (BOOL)cj_save:(id)a0 forKey:(id)a1 from:(id)a2;
+ (id)cj_stringForKey:(id)a0 withAccount:(id)a1;
+ (BOOL)cj_deleteForKey:(id)a0;
+ (id)passwordDataForService:(id)a0 account:(id)a1;
+ (BOOL)setPasswordData:(id)a0 forService:(id)a1 account:(id)a2;
+ (id)accountsForService:(id)a0 error:(id *)a1;
+ (id)allAccounts:(id *)a0;
+ (id)passwordDataForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)setPasswordData:(id)a0 forService:(id)a1 account:(id)a2 error:(id *)a3;
+ (id)allAccounts;
+ (id)accountsForService:(id)a0;
+ (id)passwordForService:(id)a0 account:(id)a1;
+ (id)passwordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2 error:(id *)a3;
+ (const void *)accessibilityType;
+ (void)setAccessibilityType:(void *)a0;

@end
