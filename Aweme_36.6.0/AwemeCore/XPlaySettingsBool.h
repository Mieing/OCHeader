@class NSString;

@interface XPlaySettingsBool : XPlaySettingsValue <XPlaySettingsBool>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKeyPath:(id)a0 settingsTypes:(unsigned long long)a1 stable:(unsigned long long)a2 defaultValue:(BOOL)a3;
- (BOOL)rawValue;

@end
