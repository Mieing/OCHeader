@interface WCFinderPlayAPMMonitor : NSObject <CNetworkStatusExt>

@property (nonatomic) unsigned long long lastNetworkType;

- (id)init;
- (void)dealloc;
- (void)reportDiskFreeSpaceSize;
- (void)ReachabilityChange:(unsigned int)a0;

@end
