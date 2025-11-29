@protocol TingFlowPlayerProtocol;

@interface TingChatRoomNowPlay : TingNowPlayingInfoCenter

@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;

- (id)activePlayer;
- (id)moduleId;
- (id)nowPlayingInfoWithPlayingItem:(id)a0 player:(id)a1;
- (void)resumePlayer;
- (void)registerCommandCenterActions;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void).cxx_destruct;

@end
