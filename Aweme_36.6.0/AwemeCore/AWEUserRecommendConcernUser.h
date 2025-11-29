@class UIColor, NSArray, NSString, AWEUserModel;

@interface AWEUserRecommendConcernUser : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) UIColor *beginColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) long long rankIndex;
@property (copy, nonatomic) NSString *trackerRecReason;

+ (id)awemeListJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
