@class NSString;

@interface AWERelatedRecommendLabel : AWEBaseApiModel

@property (nonatomic) long long relationType;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
