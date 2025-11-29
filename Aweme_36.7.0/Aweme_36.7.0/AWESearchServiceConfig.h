@class NSString;

@interface AWESearchServiceConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *sepecificClass;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
