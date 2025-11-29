@interface MMKeychain : NSObject

+ (id)getKeychainQuery:(id)a0 accessGroup:(id)a1 migratable:(BOOL)a2;
+ (BOOL)save:(id)a0 data:(id)a1 accessGroup:(id)a2 migratable:(BOOL)a3;
+ (BOOL)save:(id)a0 data:(id)a1 accessGroup:(id)a2 migratable:(BOOL)a3 error:(int *)a4;
+ (id)load:(id)a0 accessGroup:(id)a1 migratable:(BOOL)a2;
+ (id)load:(id)a0 accessGroup:(id)a1 migratable:(BOOL)a2 error:(int *)a3;
+ (BOOL)deleteWithService:(id)a0 accessGroup:(id)a1 migratable:(BOOL)a2;
+ (BOOL)deleteWithService:(id)a0 accessGroup:(id)a1 migratable:(BOOL)a2 error:(int *)a3;
+ (id)bundleSeedID;
+ (id)accessGroup;

@end
