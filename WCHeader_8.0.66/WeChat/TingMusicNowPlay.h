@protocol TingFlowPlayerProtocol;

@interface TingMusicNowPlay : TingNowPlayingInfoCenter

@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;

- (id)activePlayer;
- (id)moduleId;
- (id)nowPlayingInfoWithPlayingItem:(id)a0 player:(id)a1;
- (void).cxx_destruct;

@end
