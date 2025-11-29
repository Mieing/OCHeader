@class IESIMCodeGenTagItemModel, IESIMCodeGenUserTagModel;

@interface IESIMCodeGenGroupTagInfoGetResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) IESIMCodeGenUserTagModel *userTagModel;
@property (retain, nonatomic) IESIMCodeGenTagItemModel *tagConfModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
