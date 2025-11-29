@class NSString, AWEQuickFlashStickerInfoModel, NSArray, NSNumber, AWEURLModel;

@interface ACCTrendCollectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *trendID;
@property (copy, nonatomic) NSString *trendTitle;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSString *UGID;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) AWEQuickFlashStickerInfoModel *flashModel;
@property (retain, nonatomic) NSArray *originMaterials;
@property (copy, nonatomic) NSString *trendFullpageTitle;
@property (copy, nonatomic) NSNumber *originalItemID;
@property (copy, nonatomic) NSString *collectMaterial;
@property (copy, nonatomic) NSNumber *collectValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)trendIDJSONTransformer;
+ (id)musicIdJSONTransformer;
+ (id)UGIDJSONTransformer;
+ (id)flashModelJSONTransformer;
+ (id)originMaterialsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToAWETrendInfoModel;
- (void).cxx_destruct;

@end
