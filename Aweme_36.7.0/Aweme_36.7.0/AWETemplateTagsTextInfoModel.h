@class NSString, AWETemplateTagsTextInfoStyleModel;

@interface AWETemplateTagsTextInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWETemplateTagsTextInfoStyleModel *style;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
