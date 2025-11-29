@class NSTimer, NSString, NSDate;
@protocol CGHeartBeatEventDelegate;

@interface CGHeartBeatEventComponent : CGObject <CGItemStatusUpdateMessage, CGHeartBeatEventComponentProtocol>

@property (nonatomic) BOOL isHeartBeatStarted;
@property (nonatomic) BOOL enableHeartBeatConsumeTime;
@property (retain, nonatomic) NSTimer *heartbeatTimer;
@property (nonatomic) double heartbeatInterval;
@property (retain, nonatomic) NSDate *heartbeatSentTime;
@property (nonatomic) unsigned long long heartbeatUnreceivedTimes;
@property (retain, nonatomic) NSTimer *callbackTimer;
@property (nonatomic) double resignStartTime;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CGHeartBeatEventDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)enableSendHeartbeatConsumeTime:(BOOL)a0;
- (void)sendLastHeartBeat;
- (void)pauseSendHeartBeat;
- (void)refreshRemainingPlayTimeAfterResignActive;
- (void)startSendHeartBeatFrom:(id)a0;
- (void)captureLastFrameAndShow;
- (void)sendHeartBeatImmediately;
- (void)callbackPlayTimeCountDown:(unsigned long long)a0;
- (void)dealWithRemainingTimeout:(BOOL)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)item:(id)a0 statusDidUpdated:(unsigned long long)a1;
- (void)callbackIncreaseTimeResult:(id)a0;
- (void)triggerPlayTimeCountDown;
- (void)sendHeartBeat;
- (void)callbackPlayItemDidLostConnection;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (void)dealloc;

@end
