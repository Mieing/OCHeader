@class NSDictionary;

@interface AWEMRDotCountStrategyResult : NSObject

@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSDictionary *showMap;
@property (copy, nonatomic) NSDictionary *degradedMap;

- (void).cxx_destruct;
- (id)description;

@end
