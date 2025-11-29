@class IESSoloKTVTemplateAttributeModel;

@interface IESSoloKTVTemplateSingerModel : IESSoloKTVTemplateBaseModel

@property (retain, nonatomic) IESSoloKTVTemplateAttributeModel *attribute;

+ (id)positionJSONTransformer;
+ (id)attributeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
