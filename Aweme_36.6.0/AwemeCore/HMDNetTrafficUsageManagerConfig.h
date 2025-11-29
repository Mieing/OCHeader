@interface HMDNetTrafficUsageManagerConfig : NSObject

@property (nonatomic) unsigned long long requestBytesThreshold;
@property (nonatomic) unsigned long long imageBytesThreshold;
@property (nonatomic) int requestFreqThreshold;

- (id)init;

@end
