@class AWEAweMVTemplateModel, AWENewFaceStickerModel;

@interface AWEFavoriteEffectsAndTemplatesDetail : ACCGenericEffectPanelFavoriteModel

@property (nonatomic) unsigned long long uiType;
@property (retain, nonatomic) AWENewFaceStickerModel *effect;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (nonatomic) long long templateType;
@property (nonatomic) BOOL customCoverRatio;

+ (id)effectJSONTransformer;
+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
