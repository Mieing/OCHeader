@class NSArray, AWENearbyPOITagRateInfoModel, AWEPOISpuModel, AWENearbyPOIContentModel, NSString;

@interface AWENearbyPOIInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *danmakuList;
@property (retain, nonatomic) AWENearbyPOITagRateInfoModel *tagRateInfo;
@property (retain, nonatomic) AWEPOISpuModel *spuInfo;
@property (retain, nonatomic) AWENearbyPOIContentModel *simplePOIInfo;
@property (nonatomic) long long poiSpuCount;
@property (readonly, copy, nonatomic) NSString *spuServiceType;
@property (nonatomic) BOOL isFavorite;

+ (id)danmakuListJSONTransformer;
+ (id)simplePOIInfoJSONTransformer;
+ (id)spuInfoJSONTransformer;
+ (id)tagRateInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
