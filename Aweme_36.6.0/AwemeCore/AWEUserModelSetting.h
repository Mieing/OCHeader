@class NSString;

@interface AWEUserModelSetting : HTSService <AWEUserModelSetting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;
- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;

@end
