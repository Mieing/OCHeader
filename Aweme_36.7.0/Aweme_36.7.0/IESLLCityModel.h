@class NSString, NSNumber, NSArray;
@protocol IESLLCityModel;

@interface IESLLCityModel : MTLModel <MTLJSONSerializing, IESLLCityModel>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *districtCode;
@property (copy, nonatomic) NSNumber *districtType;
@property (copy, nonatomic) NSString *en;
@property (copy, nonatomic) NSString *cnPinyin;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameEn;
@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *adCode;
@property (copy, nonatomic) NSString *currentPositionName;
@property (retain, nonatomic) NSArray *districtsArray;
@property (copy, nonatomic) NSString *L2CityName;
@property (copy, nonatomic) NSArray *l2ReCodeList;
@property (weak, nonatomic) id<IESLLCityModel> upperCity;
@property (nonatomic) BOOL isL3;
@property (retain, nonatomic) NSArray *subCities;
@property (retain, nonatomic) NSArray *center;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *asciName;
@property (copy, nonatomic) NSString *grouponCityName;
@property (nonatomic) BOOL isSchoolCircle;
@property (nonatomic) BOOL needForceBackToNormalNearby;
@property (nonatomic) BOOL isChannelPage;
@property (copy, nonatomic) NSString *locationSource;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiCity;
@property (copy, nonatomic) NSString *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)districtsArrayJSONTransformer;
+ (id)subCitiesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
