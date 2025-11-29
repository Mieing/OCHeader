@interface AWEUserSharedMultiConfigImpl : AWEUserSharedConfigDefaultImpl

+ (Class)weakTargetClass;

- (id)stringWithKey:(long long)a0;
- (BOOL)boolWithKey:(long long)a0;
- (long long)intWithKey:(long long)a0;
- (double)doubleWithKey:(long long)a0;
- (id)arrayWithKey:(long long)a0;
- (id)dictWithKey:(long long)a0;
- (id)weakTarget;

@end
