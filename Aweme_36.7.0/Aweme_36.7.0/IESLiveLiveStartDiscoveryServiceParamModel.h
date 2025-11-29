@class NSString, NSNumber;

@interface IESLiveLiveStartDiscoveryServiceParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *timeout;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
