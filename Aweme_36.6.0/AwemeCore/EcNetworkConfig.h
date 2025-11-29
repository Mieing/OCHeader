@class NSString, NSDictionary, EcNetworkDomain;

@interface EcNetworkConfig : NSObject

@property (nonatomic) BOOL BOE;
@property (copy, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (retain, nonatomic) EcNetworkDomain *domain;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
