@class NSString;
@protocol RxInjector, RTVSettingsManager;

@interface AWERTVVoipSettingManager : NSObject <RTVVoipSettingManagerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)isTeenModeDouyinEnable;
- (BOOL)isVoipEnable;
- (id)settingDictionary;
- (id)defaultUserAvatar;
- (id)settingDictionaryForKey:(id)a0;
- (id)settingValueForKey:(id)a0 defaultValue:(id)a1;
- (id)settingValueForABKey:(id)a0 defaultABValue:(id)a1;
- (BOOL)isVoipNarrowEnabled;
- (void).cxx_destruct;

@end
