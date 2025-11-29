@class NSString;

@interface AFDLearningRecommendReasonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long recommendType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
