@interface APKKeychainBindings : NSObject

+ (id)sharedKeychainBindings;

- (void)setObject:(id)a0 forKey:(id)a1 accessibleAttribute:(void *)a2;
- (void)setString:(id)a0 forKey:(id)a1 accessibleAttribute:(void *)a2;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
