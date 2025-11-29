@interface AWEFeedConsumeOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler

- (id)referString;
- (BOOL)isFromFeed;
- (void)onPrepareToPlay:(BOOL)a0;
- (BOOL)isFromFeedOrFellow;
- (id)model;
- (void)onPlay:(long long)a0;

@end
