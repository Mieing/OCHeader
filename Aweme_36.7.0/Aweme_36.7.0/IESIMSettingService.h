@class NSString;

@interface IESIMSettingService : HTSService <IESIMSettingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheOptDict;
- (id)registerSettingGetMethod;
- (id)registerSettingGetMethodStable;
- (id)registerSettingGetMethodInstable;
- (BOOL)settingValueToBOOL:(id)a0;
- (double)settingValueToDouble:(id)a0;
- (long long)settingValueToInt:(id)a0;
- (id)settingValueToNumber:(id)a0;
- (id)settingValueToString:(id)a0;
- (id)settingValueToArray:(id)a0;
- (id)settingValueToDictionary:(id)a0;
- (void /* function */ *)valueToBoolFunc;
- (void /* function */ *)valueToDoubleFunc;
- (void /* function */ *)valueToIntFunc;
- (void /* function */ *)valueToNumberFunc;
- (void /* function */ *)valueToStringFunc;
- (void /* function */ *)valueToArrayFunc;
- (void /* function */ *)valueToDictionaryFunc;
- (id)settingsChangeHandler;

@end
