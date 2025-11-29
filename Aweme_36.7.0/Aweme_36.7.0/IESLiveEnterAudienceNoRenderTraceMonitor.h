@class IESLiveEnterRoomAisle, NSMutableDictionary, NSDictionary, HTSLiveStreamPlayer, NSError, NSString;

@interface IESLiveEnterAudienceNoRenderTraceMonitor : NSObject <HTSLiveStreamPlayerAction>

@property (readonly, weak, nonatomic) HTSLiveStreamPlayer *player;
@property (readonly, weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) double startTime;
@property (nonatomic) double startPullStreamTime;
@property (nonatomic) double firstFrameDuration;
@property (nonatomic) double playerFirstFrameDuration;
@property (nonatomic) BOOL hasReceiveFirstFrame;
@property (copy, nonatomic) NSDictionary *playerStateDetailInfo;
@property (nonatomic) double apiRequestStartTime;
@property (nonatomic) double apiRequestDuration;
@property (nonatomic) double apiRequestSuccess;
@property (retain, nonatomic) NSError *apiRequestError;
@property (nonatomic) double scrollDuration;
@property (nonatomic) long long sceneErrorCode;
@property (nonatomic) BOOL isSingleRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didEnterRoom:(BOOL)a0;
- (void)p_reset;
- (void)streamPlayerDidReadyToRender;
- (void)preCheckPlayerStateIfNeeded;
- (void)traceSpan:(unsigned long long)a0 isStart:(BOOL)a1 error:(id)a2;
- (void)endMonitorWithType:(unsigned long long)a0 extraParams:(id)a1;
- (id)initWithPlayer:(id)a0 roomAisle:(id)a1;
- (BOOL)p_isTracing;
- (id)p_checkPlayerStateInfo;
- (id)p_netQualityInfo;
- (BOOL)p_ignorePlayerViewCheck;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)startMonitor;

@end
