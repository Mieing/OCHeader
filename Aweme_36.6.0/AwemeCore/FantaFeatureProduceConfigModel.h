@class NSString, NSArray, NSDictionary;

@interface FantaFeatureProduceConfigModel : NSObject

@property (copy, nonatomic) NSString *featureSource;
@property (copy, nonatomic) NSArray *featureConfigs;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)createWithConfig:(id)a0;

- (void).cxx_destruct;

@end
