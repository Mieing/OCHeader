@class NSString, NSArray;

@interface AWEIMRecommendTaskCardDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *recommendTitle;
@property (copy, nonatomic) NSString *getAllJumpSchema;
@property (nonatomic) long long showType;
@property (nonatomic) long long missionSource;
@property (copy, nonatomic) NSArray *recommendMissionNormalInfo;
@property (copy, nonatomic) NSArray *recommendMissionIconInfo;

+ (id)recommendMissionNormalInfoJSONTransformer;
+ (id)recommendMissionIconInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
