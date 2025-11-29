@class IESSoloKTVTemplateAttributeModel, IESSoloKTVTemplateColorItemModel;

@interface IESSoloKTVTemplateLyricModel : IESSoloKTVTemplateBaseModel

@property (nonatomic) int rows;
@property (nonatomic) int easyOut;
@property (nonatomic) long long style;
@property (retain, nonatomic) IESSoloKTVTemplateAttributeModel *fgAttribute;
@property (retain, nonatomic) IESSoloKTVTemplateColorItemModel *bgColor;
@property (retain, nonatomic) IESSoloKTVTemplateColorItemModel *unfocusColor;

+ (id)positionJSONTransformer;
+ (id)fgAttributeJSONTransformer;
+ (id)unfocusColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)bgColorJSONTransformer;

- (void).cxx_destruct;

@end
