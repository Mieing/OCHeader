@class NSString, NSArray, AWESpecialRichAwemeLifeLifeCardImagePOIInfoModel, AWESpecialRichAwemeLifeCardImageSpuInfoModel;

@interface AWESpecialRichAwemeLifeCardImageInfoModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWESpecialRichAwemeLifeCardImageSpuInfoModel *spuInfoModel;
@property (retain, nonatomic) AWESpecialRichAwemeLifeLifeCardImagePOIInfoModel *poiInfo;
@property (retain, nonatomic) NSArray *tabInfo;
@property (copy, nonatomic) NSString *extra;

+ (id)poiInfoJSONTransformer;
+ (id)spuInfoModelJSONTransformer;
+ (id)tabInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
