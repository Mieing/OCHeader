@class NSString, IESIMUGCodeGenUserQuotaModel, IESIMUGCodeGenGroupRelationModel;

@interface IESIMUGCodeGenAwemeUgGeneralIncentiveChatV2GroupRelationCreateResponseDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;
@property (retain, nonatomic) IESIMUGCodeGenGroupRelationModel *groupRelationModel;
@property (retain, nonatomic) IESIMUGCodeGenUserQuotaModel *userQuotaModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
