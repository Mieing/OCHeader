@interface IESLiveIMByteLinkWSFetcher : IESLiveIMWebSocketFetcher

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (BOOL)asyncSendPushMessage:(id)a0;
- (void)handleHeaders:(id)a0 toOutPacket:(id)a1;
- (void)resetHeartbeatTimer;
- (void)updateHeartbeatDuration:(long long)a0;
- (void)checkConnectState;

@end
