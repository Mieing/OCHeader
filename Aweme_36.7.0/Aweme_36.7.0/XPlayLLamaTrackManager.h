@class HMDTTMonitor;

@interface XPlayLLamaTrackManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;

+ (id)sharedManager;

- (void)trackData:(id)a0 logType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
