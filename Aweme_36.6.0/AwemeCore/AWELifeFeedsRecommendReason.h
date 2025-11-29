@class NSArray;

@interface AWELifeFeedsRecommendReason : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) long long spacing;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tagsJSONTransformer;

- (void).cxx_destruct;

@end
