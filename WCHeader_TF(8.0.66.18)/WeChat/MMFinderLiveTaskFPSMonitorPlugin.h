@class _TtC6WeChat22MMFinderLiveFPSMonitor;

@interface MMFinderLiveTaskFPSMonitorPlugin : MMLiveTaskBaseFunctionPlugin

@property (retain, nonatomic) _TtC6WeChat22MMFinderLiveFPSMonitor *monitor;
@property (nonatomic) BOOL started;

- (void)startMonitor;
- (void)stopMonitor;
- (void)report;
- (void)dealloc;
- (void)createMonitorIfNeeded;
- (void).cxx_destruct;

@end
