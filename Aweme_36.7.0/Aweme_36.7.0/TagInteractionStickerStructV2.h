@class NSString, CustomTagInteractionStickerStructV2, PoiTagInteractionStickerStructV2, AdTagInteractionStickerStructV2, LifeCardTagInteractionStickerStructV2, UserTagInteractionStickerStructV2, ShootPositionTagInteractionStickerStructV2, ProductTagInteractionStickerStructV2, BrandTagInteractionStickerStructV2;

@interface TagInteractionStickerStructV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int orientation;
@property (nonatomic) BOOL hasOrientation;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (retain, nonatomic) CustomTagInteractionStickerStructV2 *customTag;
@property (nonatomic) BOOL hasCustomTag;
@property (retain, nonatomic) UserTagInteractionStickerStructV2 *userTag;
@property (nonatomic) BOOL hasUserTag;
@property (retain, nonatomic) PoiTagInteractionStickerStructV2 *poiTag;
@property (nonatomic) BOOL hasPoiTag;
@property (retain, nonatomic) ProductTagInteractionStickerStructV2 *productTag;
@property (nonatomic) BOOL hasProductTag;
@property (retain, nonatomic) BrandTagInteractionStickerStructV2 *brandTag;
@property (nonatomic) BOOL hasBrandTag;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (retain, nonatomic) AdTagInteractionStickerStructV2 *adTag;
@property (nonatomic) BOOL hasAdTag;
@property (retain, nonatomic) LifeCardTagInteractionStickerStructV2 *lifeCardTag;
@property (nonatomic) BOOL hasLifeCardTag;
@property (retain, nonatomic) ShootPositionTagInteractionStickerStructV2 *shootPositionTag;
@property (nonatomic) BOOL hasShootPositionTag;

+ (id)descriptor;

@end
