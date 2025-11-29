@class AWETeenTimeLockScreenTimeSettingsModel, AWETeenPendantModel;

@interface AWETeenTimeLockResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenTimeLockScreenTimeSettingsModel *timeLockSettings;
@property (nonatomic) BOOL useLocalTimeZone;
@property (retain, nonatomic) AWETeenPendantModel *pendantSettings;

+ (id)timeLockSettingsJSONTransformer;
+ (id)pendantSettingsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
