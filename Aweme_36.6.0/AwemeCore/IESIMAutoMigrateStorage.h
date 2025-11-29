@interface IESIMAutoMigrateStorage : NSObject

+ (id)sharedInstance;

- (id)p_objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)p_setObject:(id)a0 forKey:(id)a1;
- (id)p_keyWithUidSuffix:(id)a0 uid:(id)a1;
- (id)keyWithUidSuffix:(id)a0 uid:(id)a1;
- (id)keyWithCurrentUidSuffix:(id)a0;
- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)setObject:(id)a0 forKey:(id)a1;

@end
