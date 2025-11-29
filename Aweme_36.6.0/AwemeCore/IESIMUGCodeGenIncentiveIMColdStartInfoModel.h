@class IESIMUGCodeGenMessageTabUiInfoModel, NSString, IESIMUGCodeGenGroupActivityInfoModel, IESIMUGCodeGenPrivateActivityInfoModel;

@interface IESIMUGCodeGenIncentiveIMColdStartInfoModel : AWEBaseDataModel

@property (nonatomic) int bizErrCode;
@property (copy, nonatomic) NSString *activityKey;
@property (nonatomic) BOOL hasMessageTabEntry;
@property (retain, nonatomic) IESIMUGCodeGenMessageTabUiInfoModel *messageTabUiInfoModel;
@property (retain, nonatomic) IESIMUGCodeGenPrivateActivityInfoModel *privateActivityInfoModel;
@property (retain, nonatomic) IESIMUGCodeGenGroupActivityInfoModel *groupActivityInfoModel;
@property (nonatomic) long long currentTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
