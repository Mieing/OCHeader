@class NSString;

@interface TTVideoEngineEnvConfig : NSObject

@property (class, copy, nonatomic) NSString *dnsTTHost;
@property (class, copy, nonatomic) NSString *dnsGoogleHost;
@property (class, copy, nonatomic) NSString *dnsServerHost;
@property (class, copy, nonatomic) NSString *boeHost;
@property (class, copy, nonatomic) NSString *testReachabilityHost;

@end
