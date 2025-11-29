@class ACCImageTemplateDetailModel;

@interface ACCImageTemplateDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) ACCImageTemplateDetailModel *templateDetail;

+ (id)templateDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
