@class CKGenericTemplateModel;

@interface ACCGenericEffectPanelFavoriteModel : ACCRecordInspirationBaseModel

@property (retain, nonatomic) CKGenericTemplateModel *ckTemplateModel;

+ (id)ckTemplateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
