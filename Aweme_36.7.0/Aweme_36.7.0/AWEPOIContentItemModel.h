@class NSString, NSArray, AWEPOITypeModel, AWEPOIContentScoreInfoModel, AWEURLModel, AWEPOISchemaModel, NSNumber, AWEAddressModel;

@interface AWEPOIContentItemModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *rankUrl;
@property (copy, nonatomic) NSString *rankIndex;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEPOITypeModel *poiBackendType;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *rating;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *poiAreaName;
@property (copy, nonatomic) NSString *poiTypeName;
@property (copy, nonatomic) NSString *rankDescription;
@property (copy, nonatomic) NSString *couponDescription;
@property (retain, nonatomic) AWEAddressModel *addressInfo;
@property (copy, nonatomic) NSArray *voucherReleaseAreas;
@property (retain, nonatomic) NSNumber *rankScore;
@property (retain, nonatomic) NSNumber *collectCount;
@property (retain, nonatomic) NSNumber *collectStatus;
@property (copy, nonatomic) NSArray *iconServiceTypeList;
@property (nonatomic) BOOL isAdminArea;
@property (retain, nonatomic) AWEURLModel *subtitleImageURL;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *recommendTags;
@property (copy, nonatomic) NSString *commentLabel;
@property (copy, nonatomic) NSString *driving;
@property (copy, nonatomic) NSString *poiRankScoreDesc;
@property (nonatomic) double recommendedScore;
@property (retain, nonatomic) AWEPOIContentScoreInfoModel *poiScoreInfo;
@property (copy, nonatomic) NSString *scoreDistance;
@property (retain, nonatomic) AWEPOISchemaModel *schemaModel;
@property (copy, nonatomic) NSString *schemaString;
@property (copy, nonatomic) NSString *floor;

+ (id)coverURLJSONTransformer;
+ (id)subtitleImageURLJSONTransformer;
+ (id)iconServiceTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)backendType;
- (BOOL)shouldShowCouponInfoAtCurrentLocation;
- (void).cxx_destruct;

@end
