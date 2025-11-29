@class NSString;

@interface IESLLPOICouponActivityModel : IESLLifeBaseApiModel

@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *activityTitle;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)activityIDJSONTransformer;

- (void).cxx_destruct;

@end
