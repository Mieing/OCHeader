@interface AWENearbyCardFeedPerfMonitorPlugin : AWENearbyCardFeedBasePlugin

- (void)startFPSMonitor;
- (void)endFPSMonitor;
- (void)didFinishInitialFetch:(id)a0 error:(id)a1;
- (void)calculateFMP;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;

@end
