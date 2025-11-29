@class NSString;

@interface EcNetworkDomain : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL isHttps;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
