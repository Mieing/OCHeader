@class NSString, AWEPerfResourceCleanConfiguration;

@interface AWEBusinessConfiguration : NSObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *topBusinessLine;
@property (copy, nonatomic) NSString *businessLine;
@property (nonatomic) long long thresholdSize;
@property (copy, nonatomic) NSString *resourceHostingPlatform;
@property (nonatomic) unsigned long long inDomain;
@property (nonatomic) BOOL generalCleaningEnable;
@property (retain, nonatomic) AWEPerfResourceCleanConfiguration *cleaningConfig;

- (void).cxx_destruct;

@end
