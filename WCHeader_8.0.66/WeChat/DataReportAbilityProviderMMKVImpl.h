@class NSString;

@interface DataReportAbilityProviderMMKVImpl : NSObject <AmoebaAbilityProviderMMKV>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setString:(id)a0 forKey:(id)a1 withMapId:(id)a2;
- (id)getStringForKey:(id)a0 defaultValue:(id)a1 withMapId:(id)a2;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1 withMapId:(id)a2;
- (BOOL)getBoolForKey:(id)a0 defaultValue:(BOOL)a1 withMapId:(id)a2;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1 withMapId:(id)a2;
- (long long)getInt64ForKey:(id)a0 defaultValue:(long long)a1 withMapId:(id)a2;
- (void)removeValueForKey:(id)a0 withMapId:(id)a1;

@end
