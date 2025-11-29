@class NSString, AWEInteractionEditTagCameraPositionModel, AWEInteractionEditTagPOITagModel, AWEInteractionEditTagUserTagModel, AWEInteractionEditTagGoodsTagModel, AWEInteractionEditTagCustomTagModel, NSDictionary, AWEInteractionEditTagBrandTagModel, AWEInteractionEditTagLifeCardTagModel;

@interface AWEInteractionEditTagStickerInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) AWEInteractionEditTagCustomTagModel *customTag;
@property (retain, nonatomic) AWEInteractionEditTagUserTagModel *userTag;
@property (retain, nonatomic) AWEInteractionEditTagPOITagModel *POITag;
@property (retain, nonatomic) AWEInteractionEditTagGoodsTagModel *goodsTag;
@property (retain, nonatomic) AWEInteractionEditTagBrandTagModel *brandTag;
@property (retain, nonatomic) AWEInteractionEditTagCameraPositionModel *cameraPositionTag;
@property (copy, nonatomic) NSDictionary *adTag;
@property (retain, nonatomic) AWEInteractionEditTagLifeCardTagModel *lifeCardTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customTagJSONTransformer;
+ (id)userTagJSONTransformer;
+ (id)POITagJSONTransformer;
+ (id)goodsTagJSONTransformer;
+ (id)brandTagJSONTransformer;
+ (id)lifeCardTagJSONTransformer;
+ (id)cameraPositionTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraTrackerInfo;
- (BOOL)interactional;
- (void).cxx_destruct;
- (id)tagType;
- (id)tagId;

@end
