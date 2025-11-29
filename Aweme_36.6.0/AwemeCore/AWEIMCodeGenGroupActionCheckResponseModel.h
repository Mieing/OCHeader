@class IESIMCodeGenGroupActionCheckPromptInfoModel, AWEIMCodeGenFansGroupCreateInfoModel, AWEIMCodeGenPublicGroupCreateInfoModel, NSDictionary;

@interface AWEIMCodeGenGroupActionCheckResponseModel : AWEBaseResponseModel

@property (nonatomic) long long canAction;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckPromptInfoModel *promptInfoModel;
@property (retain, nonatomic) AWEIMCodeGenFansGroupCreateInfoModel *fansGroupCreateInfoModel;
@property (retain, nonatomic) AWEIMCodeGenPublicGroupCreateInfoModel *publicGroupCreateInfoModel;
@property (copy, nonatomic) NSDictionary *ext;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
