@class NSString, NSDictionary;

@interface AWESearchSmartFeatureConfig : NSObject

@property (nonatomic) long long fetchType;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSDictionary *featureFetchKeys;

- (void).cxx_destruct;

@end
