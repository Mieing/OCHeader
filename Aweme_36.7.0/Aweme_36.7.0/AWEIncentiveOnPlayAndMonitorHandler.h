@protocol IESVideoPlayerProtocol;

@interface AWEIncentiveOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler

@property (weak, nonatomic) id<IESVideoPlayerProtocol> consumingPlayer;

+ (Class)aAWEFeedCountTimerRulesDOUYINAdapterClass;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (id)aAWEFeedCountTimerRulesDOUYINAdapter;
- (void)onPlayer:(id)a0 didChangeStallState:(long long)a1 actionType:(long long)a2 reason:(unsigned long long)a3 context:(id)a4;
- (void).cxx_destruct;

@end
