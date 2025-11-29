@class NSMutableDictionary, NSDictionary, IESLiveGCDTimer, IESEffectModel, NSObject, NSString;
@protocol OS_dispatch_queue, IESLiveAnchorDynamicClarityPreferenceService, IESLiveRecoder;

@interface IESLiveVideoStreamMonitorService : IESLiveGeneralBaseService <IESLiveVideoStreamMonitor, IESLiveAnchorRoomStatusChangeEvents, IESLiveStreamConfigActions, IESLiveEffectConflictStatusHandle>

@property (nonatomic) long long monitorInterval;
@property (retain, nonatomic) IESLiveGCDTimer *monitorTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic) double lastTrackTime;
@property (nonatomic) long long monitorMinDuration;
@property (weak, nonatomic) id<IESLiveRecoder> recoder;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) NSDictionary *streamNodes;
@property (retain, nonatomic) NSDictionary *effectNodes;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (nonatomic) struct CGSize { double width; double height; } streamPreviewSize;
@property (retain, nonatomic) NSMutableDictionary *streamCostIntegerParams;
@property (retain, nonatomic) NSMutableDictionary *streamCostDoubleParams;
@property (retain, nonatomic) NSMutableDictionary *streamTypeParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)startAnchorLiveWithRoom:(id)a0;
- (id)effectParams;
- (void)handleEffectConflictStatus:(long long)a0 scene:(long long)a1;
- (void)willUpdateStreamConfigWithParams:(id *)a0;
- (void)didUpdateStreamConfigWithParams:(id)a0;
- (BOOL)isVideoLive;
- (void)recordVideoStreamParams:(id)a0;
- (void)trackVideoStreamInfo;
- (id)formatCapturePresent:(id)a0;
- (id)streamAvgCostParams;
- (void)cleanVideoStreamInfo;
- (void).cxx_destruct;

@end
