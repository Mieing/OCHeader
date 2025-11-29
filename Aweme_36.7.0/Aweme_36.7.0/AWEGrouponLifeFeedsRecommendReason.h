@class NSArray;

@interface AWEGrouponLifeFeedsRecommendReason : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tags;
@property (nonatomic) long long spacing;
@property (nonatomic) double recommendReasonHeight;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tagsJSONTransformer;

- (void).cxx_destruct;

@end
