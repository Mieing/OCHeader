@interface AWEAwemeDetailFirstVideoMonitorHandler : AWEOnPlayAndMonitorBaseHandler

- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (BOOL)isFromDetailFeed;
- (void)endDetailFirstFrameUIMonitor;
- (void)endDetailFirstVideoUIMonitor;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:(BOOL)a0;

@end
