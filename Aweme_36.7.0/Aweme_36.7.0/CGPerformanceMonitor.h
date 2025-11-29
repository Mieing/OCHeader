@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CGPerformanceMonitor : CGObject <CGCloudPlayerMessage, CGCloudPlayerStatusUpdateMessage>

@property (nonatomic) BOOL hasTrackFirstFrameRendered;
@property (nonatomic) BOOL hasTrackFirstFrameDecoded;
@property long long txCellularKBitrate;
@property long long rxCellularKBitrate;
@property long long rxBytes;
@property (copy, nonatomic) NSString *playerLifecycle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property long long performanceStatsReportId;
@property long long detectDelayReportId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackSDKInit;
- (void)trackEngineInit:(id)a0;
- (void)trackPlayGame;
- (void)trackJoinRoom;
- (void)trackAddRenderView:(id)a0;
- (void)trackSdkDestroy;
- (void)trackOperationDelay:(double)a0 frameIndex:(long long)a1 interval:(long long)a2 frames:(unsigned long long)a3 isSuccess:(BOOL)a4;
- (void)trackStopVideoStreamAndQuitRoomFrom:(id)a0;
- (void)item:(id)a0 cloudPlayer:(id)a1 onFirstRemoteVideoFrameDecoded:(id)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onFirstRemoteVideoFrameRendered:(id)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onEngineErrorWithCode:(long long)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserJoined:(id)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserLeave:(id)a2 reason:(long long)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserPublishStreamVideo:(BOOL)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRemoteStreamStats:(id)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRoomStateChanged:(long long)a2 uid:(id)a3 reason:(long long)a4 originalErrorCode:(long long)a5;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRoomStats:(id)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (void)dealloc;

@end
