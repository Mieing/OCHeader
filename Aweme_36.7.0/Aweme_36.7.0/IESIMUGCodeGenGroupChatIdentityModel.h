@class IESIMUGCodeGenUserQuotaModel, NSArray;

@interface IESIMUGCodeGenGroupChatIdentityModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMUGCodeGenUserQuotaModel *userQuotaModel;
@property (copy, nonatomic) NSArray *establishedRelationsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
