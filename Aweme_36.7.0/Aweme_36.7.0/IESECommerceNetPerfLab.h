@class NSDictionary;

@interface IESECommerceNetPerfLab : NSObject

@property (nonatomic) BOOL enableNetPerf;
@property (copy, nonatomic) NSDictionary *netPerfConf;

- (id)generateRandomString:(long long)a0;
- (void)executeNetPerfTest;
- (void)testNetSpeedInDiffSizes;
- (void).cxx_destruct;
- (id)init;

@end
