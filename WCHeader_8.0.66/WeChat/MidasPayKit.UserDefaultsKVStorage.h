@interface MidasPayKit.UserDefaultsKVStorage : _TtCs12_SwiftObject <MidasPayKit.KVStorageContainer> {
    void /* unknown type, empty encoding */ userDefaults;
}

- (id)dataForKey:(id)a0;
- (void)setWithData:(id)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setWithInteger:(long long)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void)setWithString:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
