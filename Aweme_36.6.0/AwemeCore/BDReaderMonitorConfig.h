@interface BDReaderMonitorConfig : NSObject

@property (nonatomic) BOOL whiteScreenCheckEnable;
@property (nonatomic) float whiteScreenRate;
@property (nonatomic) unsigned long long whiteScreenCheckInterval;
@property (nonatomic) unsigned long long whiteScreenDispatchInterval;

- (id)init;

@end
