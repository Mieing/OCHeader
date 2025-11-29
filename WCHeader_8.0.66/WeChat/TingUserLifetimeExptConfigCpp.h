@class NSString;

@interface TingUserLifetimeExptConfigCpp : UnitRCObjcBaseProxyClass <TingUserLifetimeExptConfig>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)getConfigForKey:(id)a0 defaultValue:(BOOL)a1;
- (void)setConfigForKey:(id)a0 value:(BOOL)a1;
- (unsigned int)getIntConfigForKey:(id)a0 defaultValue:(unsigned int)a1;
- (void)setIntConfigForKey:(id)a0 value:(unsigned int)a1;
- (id)getStringConfigForKey:(id)a0 defaultValue:(id)a1;
- (void)setStringConfigForKey:(id)a0 value:(id)a1;
- (void)checkHasAccessSensitiveExpt:(id)a0 timeIntervalMs:(long long)a1;

@end
