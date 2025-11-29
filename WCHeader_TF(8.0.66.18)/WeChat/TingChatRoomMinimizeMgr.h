@class NSString;

@interface TingChatRoomMinimizeMgr : TingPlayAppMinimieBase <TingChatRoomPluginListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMinimizeTaskInitInMainThread;
- (void)onForegroundStateChangedInMainThread:(BOOL)a0;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (BOOL)shouldTurnMinimizeActive;
- (void)onRoomMemberCountChanged:(id)a0 count:(unsigned int)a1;
- (void)onReceiveRoomMessage:(id)a0 msgList:(id)a1;
- (void)onRoomReconnect:(id)a0;
- (void)onReceiveRecommendBubbleMsg:(id)a0 msg:(id)a1;
- (void)onRoomClosed;

@end
