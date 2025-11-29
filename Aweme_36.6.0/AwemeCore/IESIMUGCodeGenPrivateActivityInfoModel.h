@class IESIMUGCodeGenPrivateChatIdentityModel, IESIMUGCodeGenPrivateUIInfoModel, IESIMUGCodeGenFriendListModel;

@interface IESIMUGCodeGenPrivateActivityInfoModel : AWEBaseDataModel

@property (nonatomic) int bizErrCode;
@property (nonatomic) BOOL hasActivity;
@property (retain, nonatomic) IESIMUGCodeGenFriendListModel *friendListModel;
@property (retain, nonatomic) IESIMUGCodeGenPrivateChatIdentityModel *privateChatIdentityModel;
@property (retain, nonatomic) IESIMUGCodeGenPrivateUIInfoModel *privateUiInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
