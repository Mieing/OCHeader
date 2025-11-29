@class IESLiveSEISender;

@interface IESLiveAnchorSEIPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) IESLiveSEISender *seiSender;

- (id)subscribeMessages;
- (void)handleLiveRoomWillClose;
- (void)handleMediaStreamEngineStarted;
- (void).cxx_destruct;

@end
