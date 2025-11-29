@class NSMutableDictionary, IESLiveInteractiveSRSettingConfig;
@protocol IESLiveLinkmicMonitor, IESLiveInteractPushStreaming;

@interface IESLiveInteractiveSuperResolutionManager : NSObject

@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) id<IESLiveLinkmicMonitor> monitor;
@property (retain, nonatomic) IESLiveInteractiveSRSettingConfig *settingConfig;
@property (nonatomic) BOOL isServerSREnable;
@property (retain, nonatomic) NSMutableDictionary *srStreamInfo;
@property (nonatomic) double latestUpdateTs;
@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;

- (id)initWithDIContext:(id)a0 linkmicMonitor:(id)a1 isAnchor:(BOOL)a2;
- (void)updateSuperResolutionWithCanvasSize:(struct CGSize { double x0; double x1; })a0 mixRegions:(id)a1 sessions:(id)a2 uilayout:(long long)a3;
- (void)updateServerSuperResolutionWithMixRegions:(id)a0;
- (void)disableAllSuperResolutionWithSessions:(id)a0 source:(id)a1;
- (void)disableSuperResolutionWithLinkmicID:(id)a0 roomID:(id)a1;
- (void)updateRenderSuperResolutionWithSessions:(id)a0 slots:(id)a1 uilayout:(long long)a2;
- (void)internalClientSuperResolution:(id)a0 ratio:(double)a1 uilayout:(long long)a2;
- (void)setRemoteVideoSuperResolutionWithSession:(id)a0 mode:(long long)a1;
- (long long)srModeWithRealRatio:(float)a0;
- (void)setRemoteVideoSuperResolutionWithLinkmicID:(id)a0 roomID:(id)a1 streamIndex:(long long)a2 mode:(long long)a3;
- (void)setRemoteVideoSuperResolutionWithSessions:(id)a0 mode:(long long)a1;
- (void)setRemoteVideoSuperResolutionWithStream:(id)a0 mode:(long long)a1;
- (void).cxx_destruct;

@end
