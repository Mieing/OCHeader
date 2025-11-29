@class IESIMUGCodeGenUserQuotaModel, IESIMUGCodeGenPrivateRelationModel;

@interface IESIMUGCodeGenAwemeUgGeneralIncentiveChatV2PrivateRelationCreateResponseDataModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMUGCodeGenPrivateRelationModel *privateRelationModel;
@property (retain, nonatomic) IESIMUGCodeGenUserQuotaModel *userQuotaModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
