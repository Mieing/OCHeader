@class NSDictionary;

@interface VmsdkSettingsManager : NSObject

@property (readonly, nonatomic) NSDictionary *settingDict;
@property (readonly, nonatomic) long long settingTime;

+ (id)shareInstance;

- (void)setSettings:(id)a0 withTime:(long long)a1;
- (void)initSettings;
- (BOOL)getSettingsFromCache:(id)a0;
- (int)getSettingsFlag;
- (id)getExperimentSettings:(id)a0;
- (void).cxx_destruct;

@end
