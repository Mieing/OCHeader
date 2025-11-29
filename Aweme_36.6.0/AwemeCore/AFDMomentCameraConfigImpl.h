@class NSDictionary, NSString;

@interface AFDMomentCameraConfigImpl : HTSService <AFDMomentCameraConfigProtocol>

@property (copy, nonatomic) NSDictionary *configKeyMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceScopeType;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
- (id)actualConfigKeyForKey:(id)a0;
- (void).cxx_destruct;

@end
