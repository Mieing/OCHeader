@class NSString;

@interface XPlaySettingsFloat : XPlaySettingsValue <XPlaySettingsFloat>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKeyPath:(id)a0 settingsTypes:(unsigned long long)a1 stable:(unsigned long long)a2 defaultValue:(float)a3;
- (float)rawValue;

@end
