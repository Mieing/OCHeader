@class NSString, NSArray, AWEIESMediaCodeGenPlaceModel, AWEIESMediaCodeGenLocationModel, AWEIESMediaCodeGenPOIModel;

@interface AWEIESMediaCodeGenMaterialGetGeoInfoResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) AWEIESMediaCodeGenLocationModel *countryModel;
@property (retain, nonatomic) AWEIESMediaCodeGenLocationModel *cityModel;
@property (retain, nonatomic) AWEIESMediaCodeGenLocationModel *districtModel;
@property (copy, nonatomic) NSArray *subDivisionsModelArray;
@property (retain, nonatomic) AWEIESMediaCodeGenPlaceModel *placeModel;
@property (retain, nonatomic) AWEIESMediaCodeGenPOIModel *poiModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
