@class IESIMUGCodeGenGroupChatIdentityModel, IESIMUGCodeGenGroupUIInfoModel;

@interface IESIMUGCodeGenGroupActivityInfoModel : AWEBaseDataModel

@property (nonatomic) int bizErrCode;
@property (nonatomic) BOOL hasActivity;
@property (retain, nonatomic) IESIMUGCodeGenGroupChatIdentityModel *groupChatIdentityModel;
@property (retain, nonatomic) IESIMUGCodeGenGroupUIInfoModel *groupUiInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
