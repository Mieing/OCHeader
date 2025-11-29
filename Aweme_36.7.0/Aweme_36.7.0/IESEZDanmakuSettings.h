@class IESEZDanmakuContext, NSMutableDictionary, NSString, IESEZDanmakuSettingConfiguration;
@protocol IESEZDanmakuSettingsDelegate;

@interface IESEZDanmakuSettings : NSObject <IESEZDanmakuSettingsProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) IESEZDanmakuSettingConfiguration *currentSettingConfiguration;
@property (retain, nonatomic) NSMutableDictionary *settingsDic;
@property (weak, nonatomic) id<IESEZDanmakuSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (id)settingConfigInCurrentSettings;
- (void)applySettingConfiguration:(id)a0;
- (void)setValue:(id)a0 forSettingKey:(id)a1;
- (id)getSettingValueWithSettingKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)resetToDefault;

@end
