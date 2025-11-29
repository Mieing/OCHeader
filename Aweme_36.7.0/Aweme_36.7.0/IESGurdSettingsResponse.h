@class NSString, IESGurdSettingsConfig, IESGurdSettingsRequestMeta, IESGurdSettingsResourceMeta, IESGurdSettingsUpdateConfig;

@interface IESGurdSettingsResponse : NSObject

@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) IESGurdSettingsConfig *settingsConfig;
@property (retain, nonatomic) IESGurdSettingsRequestMeta *requestMeta;
@property (retain, nonatomic) IESGurdSettingsResourceMeta *resourceMeta;
@property (retain, nonatomic) IESGurdSettingsUpdateConfig *updateConfig;

+ (id)responseWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
