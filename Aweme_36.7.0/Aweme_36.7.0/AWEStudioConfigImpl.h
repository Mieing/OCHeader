@class ACCConfigImpl;

@interface AWEStudioConfigImpl : ACCConfigImpl

@property (retain, nonatomic) ACCConfigImpl *config;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
- (id)_stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)_arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)_dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
