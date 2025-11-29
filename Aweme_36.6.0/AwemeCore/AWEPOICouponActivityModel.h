@class NSString;

@interface AWEPOICouponActivityModel : AWEBaseApiModel

@property (nonatomic) long long activityID;
@property (copy, nonatomic) NSString *activityTitle;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)activityIDJSONTransformer;

- (void).cxx_destruct;

@end
