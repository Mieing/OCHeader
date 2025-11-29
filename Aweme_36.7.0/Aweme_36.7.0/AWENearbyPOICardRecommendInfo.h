@class NSString;

@interface AWENearbyPOICardRecommendInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *recommendText;
@property (nonatomic) unsigned long long textType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
