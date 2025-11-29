@class NSArray, AWEPOIRecommendActivityModel, NSString;

@interface AWEPOIRecommendResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *poiInfoArray;
@property (nonatomic) BOOL splitDomains;
@property (nonatomic) BOOL isOversea;
@property (retain, nonatomic) AWEPOIRecommendActivityModel *activity;
@property (nonatomic) BOOL hasPostedWithPOIInLatestOneMonth;
@property (nonatomic) BOOL selectFirstRecommend;
@property (copy, nonatomic) NSString *hitSelectRule;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSArray *poiAnchorTabArray;
@property (nonatomic) long long poiAnchorTabDefault;
@property (nonatomic) long long userType;
@property (copy, nonatomic) NSString *autoOpenSpuPageSchema;

+ (id)poiInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
