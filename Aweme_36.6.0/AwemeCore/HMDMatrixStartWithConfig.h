@interface HMDMatrixStartWithConfig : NSObject

+ (id)sharedMonitor;

- (void)startWithConfig:(id)a0;
- (void)viewControllerChangedWithTimestamp;
- (void)stopManually;

@end
