@interface IESLiveAnchorHeimdallrPlugin : IESLiveAnchorBizPlugin

- (id)subscribeMessages;
- (void)liveRoomWillDealloc;
- (void)handleLiveRoomDidClose;
- (void)setup;

@end
