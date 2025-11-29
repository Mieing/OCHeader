@protocol TingPlayAppConfig, TingFlowPlayerProtocol;

@interface TingCustomNowPlay : TingNowPlayingInfoCenter

@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;
@property (retain, nonatomic) id<TingPlayAppConfig> playAppConfig;

- (id)activePlayer;
- (id)moduleId;
- (void).cxx_destruct;

@end
