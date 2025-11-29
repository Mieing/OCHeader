@class NSArray, AWETemplateTagsMultiTextInfoStyleModel;

@interface AWETemplateTagsMultiTextInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *textInfos;
@property (retain, nonatomic) AWETemplateTagsMultiTextInfoStyleModel *style;

+ (id)styleJSONTransformer;
+ (id)textInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
