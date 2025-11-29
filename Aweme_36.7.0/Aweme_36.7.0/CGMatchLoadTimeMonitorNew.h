@class NSTimer, NSString;
@protocol CGLoadTimeMonitorDelegate;

@interface CGMatchLoadTimeMonitorNew : CGMatchObject <CGCloudPlayerMessage, CGLoadTimeMonitor>

@property (nonatomic) unsigned long long clientJoinTimeoutInterval;
@property (nonatomic) unsigned long long remoteJoinTimeoutInterval;
@property (nonatomic) unsigned long long streamTimeoutInterval;
@property (nonatomic) unsigned long long firstFrameTimeoutInterval;
@property (retain) NSTimer *timer;
@property (nonatomic) BOOL firstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CGLoadTimeMonitorDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)startWaitFor:(long long)a0;
- (void)scheduleTimerWithType:(long long)a0;
- (void)callbackTimeoutWithType:(long long)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onFirstRemoteVideoFrameDecoded:(id)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserJoined:(id)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserPublishStreamVideo:(BOOL)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRoomStateChanged:(long long)a2 uid:(id)a3 reason:(long long)a4 originalErrorCode:(long long)a5;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
