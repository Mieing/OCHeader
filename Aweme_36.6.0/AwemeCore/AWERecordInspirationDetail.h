@class NSString, AWENewFaceStickerModel, AWEAweMVTemplateModel, AWECodeGenActivityCardModel;

@interface AWERecordInspirationDetail : ACCGenericEffectPanelFavoriteModel

@property (nonatomic) unsigned long long uiType;
@property (retain, nonatomic) AWENewFaceStickerModel *effect;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (nonatomic) BOOL customCoverRatio;
@property (copy, nonatomic) NSString *searchTransparentData;
@property (retain, nonatomic) AWECodeGenActivityCardModel *activityCardModel;

+ (id)effectJSONTransformer;
+ (id)templateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
