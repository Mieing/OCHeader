@class IESIMCodeGenGroupActionCheckPromptInfoModel;

@interface IESIMCodeGenActionCheckResultModel : AWEBaseDataModel

@property (nonatomic) long long canAction;
@property (retain, nonatomic) IESIMCodeGenGroupActionCheckPromptInfoModel *promptInfoModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
