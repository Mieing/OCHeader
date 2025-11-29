@class AWEAweMVTemplateModel;

@interface AWEMVDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;

+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
