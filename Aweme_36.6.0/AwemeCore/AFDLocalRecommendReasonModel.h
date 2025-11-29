@class NSString, AWERecommendTemplateModel, AFDRecommendReasonDataModel;

@interface AFDLocalRecommendReasonModel : AFDLocalDataCenterBaseModel <WCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) AWERecommendTemplateModel *recommendTemplate;
@property (copy, nonatomic) NSString *reasonCode;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AFDRecommendReasonDataModel *recommendReasonDataModel;

+ (const void *)modifyTime;
+ (const void *)recommendReason;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (id)recommendTemplateJSONTransformer;
+ (const void *)recommendTemplate;
+ (const void *)recommendReasonDataModel;
+ (const void *)syncTime;
+ (id)recommendReasonDataModelJSONTransformer;
+ (const void *)userID;
+ (const void *)score;
+ (const void *)isDeleted;
+ (const void *)primaryID;
+ (const void *)reasonCode;
+ (const void *)extra;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
