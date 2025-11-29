@class APKKeychainBindings, NSMutableDictionary;

@interface APKKeychainBindingsController : NSObject {
    APKKeychainBindings *_keychainBindings;
    NSMutableDictionary *_valueBuffer;
}

+ (id)sharedKeychainBindingsController;

- (BOOL)storeString:(id)a0 forKey:(id)a1;
- (BOOL)storeString:(id)a0 forKey:(id)a1 accessibleAttribute:(void *)a2;
- (id)keychainBindings;
- (void)setValue:(id)a0 forKeyPath:(id)a1 accessibleAttribute:(void *)a2;
- (id)values;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (id)serviceName;
- (id)stringForKey:(id)a0;

@end
