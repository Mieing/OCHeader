@class RoamSetting, NSMutableArray, BaseResponse;

@interface RoamSettingSetResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (nonatomic) BOOL needSync;
@property (nonatomic) unsigned long long maxRoamSettingVersion;
@property (retain, nonatomic) RoamSetting *roamSetting;
@property (retain, nonatomic) NSMutableArray *skipContactName;
@property (nonatomic) BOOL useReinitEncryptKey;

+ (void)initialize;

@end
