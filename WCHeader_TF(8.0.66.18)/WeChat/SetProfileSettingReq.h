@class BaseRequest, ProfileSetting, NSString;

@interface SetProfileSettingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) ProfileSetting *setting;
@property (retain, nonatomic) NSString *bizusername;

+ (void)initialize;

@end
