@class NSString, NSDictionary;

@interface AWESearchServiceConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *serviceConfig;
@property (copy, nonatomic) NSString *sepecificClass;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
