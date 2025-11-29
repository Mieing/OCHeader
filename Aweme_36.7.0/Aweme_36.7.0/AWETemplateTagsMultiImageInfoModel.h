@class NSArray, AWETemplateTagsMultiImageStyleModel;

@interface AWETemplateTagsMultiImageInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) AWETemplateTagsMultiImageStyleModel *style;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
