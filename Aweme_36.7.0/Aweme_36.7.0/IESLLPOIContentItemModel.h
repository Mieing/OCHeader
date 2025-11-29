@class IESLLPOISchemaModel, IESLLAddressModel, NSString, NSArray, IESLLPOIContentScoreInfoModel, IESLLPOITypeModel, IESLLifeURLModel, NSNumber;

@interface IESLLPOIContentItemModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *poiName;
@property (retain, nonatomic) IESLLifeURLModel *coverURL;
@property (retain, nonatomic) IESLLPOITypeModel *poiBackendType;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *rating;
@property (retain, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *poiAreaName;
@property (copy, nonatomic) NSString *poiTypeName;
@property (copy, nonatomic) NSString *rankDescription;
@property (copy, nonatomic) NSString *couponDescription;
@property (retain, nonatomic) IESLLAddressModel *addressInfo;
@property (copy, nonatomic) NSArray *voucherReleaseAreas;
@property (retain, nonatomic) NSNumber *rankScore;
@property (retain, nonatomic) NSNumber *collectCount;
@property (retain, nonatomic) NSNumber *collectStatus;
@property (copy, nonatomic) NSArray *iconServiceTypeList;
@property (nonatomic) BOOL isAdminArea;
@property (retain, nonatomic) IESLLifeURLModel *subtitleImageURL;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *recommendTags;
@property (copy, nonatomic) NSString *commentLabel;
@property (copy, nonatomic) NSString *driving;
@property (copy, nonatomic) NSString *poiRankScoreDesc;
@property (nonatomic) double recommendedScore;
@property (retain, nonatomic) IESLLPOIContentScoreInfoModel *poiScoreInfo;
@property (copy, nonatomic) NSString *scoreDistance;
@property (retain, nonatomic) IESLLPOISchemaModel *schemaModel;
@property (copy, nonatomic) NSString *schemaString;
@property (copy, nonatomic) NSString *floor;

+ (id)coverURLJSONTransformer;
+ (id)subtitleImageURLJSONTransformer;
+ (id)iconServiceTypeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)backendType;
- (void).cxx_destruct;

@end
