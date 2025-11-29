@class NSString;

@interface IESLiveSettingConfigModel : NSObject {
    BOOL _stable;
    id _defaultValue;
    NSString *_settingKey;
}

- (id)initWithConfig:(id)a0 stable:(BOOL)a1;
- (void).cxx_destruct;

@end
