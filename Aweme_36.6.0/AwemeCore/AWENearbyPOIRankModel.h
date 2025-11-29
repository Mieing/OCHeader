@class NSString, NSArray, AWENearbyPOIRankSchemaModel, AWEURLModel;

@interface AWENearbyPOIRankModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cityCode;
@property (retain, nonatomic) AWENearbyPOIRankSchemaModel *schemaModel;
@property (copy, nonatomic) NSArray *poiItems;
@property (retain, nonatomic) AWEURLModel *titleImageURL;
@property (copy, nonatomic) NSString *cityName;

+ (id)poiItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
