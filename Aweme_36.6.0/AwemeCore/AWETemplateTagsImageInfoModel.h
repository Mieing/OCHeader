@class AWETemplateTagsImageStyleModel, AWEURLModel;

@interface AWETemplateTagsImageInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *image;
@property (retain, nonatomic) AWETemplateTagsImageStyleModel *style;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
