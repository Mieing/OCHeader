@class NSMutableSet;

@interface IESLivePlayerRTCPullStreamMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *connetcRTCRoomIDSet;

+ (id)sharedInstance;

- (void)triggerALogReport;
- (void)onReceivedPlayAction;
- (void)p_startCheck;
- (void)p_doStartCheck;
- (void)p_onErrorWithPlayer:(id)a0;
- (void)onJoinRTCChannelWithRoomID:(id)a0;
- (void)onLeaveRTCChannelWithRoomID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
