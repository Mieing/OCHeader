@class NSString, NSArray, AWEConcernGoodsLifeFeedSpuCardShareInfo, AWEURLModel, AWEConcernGoodsCardLifeFeedSpuPoi, NSDictionary, AWEConcernGoodsCardMerchantUserInfo, AWEAwemeConcernGoodsCardBackgroundModel, AWELifeFeedSpuCardEvent;

@interface AWEAwemeConcernGoodsCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEConcernGoodsCardMerchantUserInfo *merchantUserInfo;
@property (copy, nonatomic) NSString *theme;
@property (nonatomic) unsigned long long spuCardTagType;
@property (nonatomic) unsigned long long productModeType;
@property (copy, nonatomic) NSString *musicURL;
@property (copy, nonatomic) NSArray *spuInfos;
@property (retain, nonatomic) AWEConcernGoodsCardLifeFeedSpuPoi *nearestPOIInfo;
@property (nonatomic) long long poiCount;
@property (copy, nonatomic) NSString *groupBuyingSchema;
@property (retain, nonatomic) AWEURLModel *activityImage;
@property (retain, nonatomic) AWEConcernGoodsLifeFeedSpuCardShareInfo *shareInfo;
@property (retain, nonatomic) AWEURLModel *promotionImage;
@property (retain, nonatomic) AWELifeFeedSpuCardEvent *clientEvent;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWEAwemeConcernGoodsCardBackgroundModel *background;
@property (retain, nonatomic) NSArray *headImage;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuInfosJSONTransformer;
+ (id)spuCardTagTypeJSONTransformer;
+ (id)productModeTypeJSONTransformer;
+ (id)cardTypeJSONTransformer;
+ (id)headImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lottilePath;
- (id)backgroundImagePath;
- (id)spuInfoCardIds;
- (id)spuInfoCardProductTypes;
- (id)spuInfoCardProductBizlines;
- (id)spuInfoCardPoiBackendTypes;
- (id)spuInfoCardDiscounts;
- (id)spuInfoSoldCounts;
- (id)headImageURLList;
- (BOOL)isSingleImmersiveCard;
- (BOOL)isSingleOptimizedCard;
- (void).cxx_destruct;

@end
