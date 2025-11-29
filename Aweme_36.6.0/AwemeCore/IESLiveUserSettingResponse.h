@class IESLiveUserSettingResponse_UserSetting;

@interface IESLiveUserSettingResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveUserSettingResponse_UserSetting *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
