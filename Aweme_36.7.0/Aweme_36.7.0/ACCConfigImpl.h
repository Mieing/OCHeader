@class NSString, NSMutableDictionary;

@interface ACCConfigImpl : NSObject <ACCConfigGetterProtocol, ACCConfigSetterProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *configs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
- (void)setIntValue:(long long)a0 forKey:(id)a1;
- (void)setDoubleValue:(double)a0 forKey:(id)a1;
- (id)findValueInDict:(id)a0 path:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBoolValue:(BOOL)a0 forKey:(id)a1;

@end
