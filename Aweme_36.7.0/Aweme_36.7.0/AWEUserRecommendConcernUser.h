@class NSArray, AWEUserModel, UIColor;

@interface AWEUserRecommendConcernUser : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) long long rankIndex;

+ (id)awemeListJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
