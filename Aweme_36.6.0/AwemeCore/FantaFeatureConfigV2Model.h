@class NSArray, NSDictionary;

@interface FantaFeatureConfigV2Model : NSObject

@property (copy, nonatomic) NSArray *featureList;
@property (copy, nonatomic) NSDictionary *featureConfig;
@property (copy, nonatomic) NSDictionary *featureSourceConfig;

+ (id)createWithConfig:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
