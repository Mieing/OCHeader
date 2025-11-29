@class NSArray;

@interface AWENewRecommendCountResponseModel : AWEBaseApiModel

@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *users;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
