@class NSArray, NSDictionary;

@interface AMapFlowControlConfig : AMapCloudConfig

@property (readonly, nonatomic) NSArray *blockConfig;
@property (readonly, nonatomic) NSDictionary *domainMaps;

- (id)initWithCloudConfig:(id)a0;
- (void).cxx_destruct;

@end
