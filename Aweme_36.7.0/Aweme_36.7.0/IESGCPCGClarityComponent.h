@class NSString;
@protocol IESGCPCGResolution;

@interface IESGCPCGClarityComponent : IESGCPCGInstanceBaseComponent <IESGCPCGPerfsMonitorDetectActions, IESGCPCGClarityRouter>

@property (retain, nonatomic) id<IESGCPCGResolution> currentResolution;
@property (nonatomic) double lastBlockActionTime;
@property (nonatomic) long long showSwitchResolutionGuideNum;
@property (nonatomic) unsigned long long expectFPS;
@property (nonatomic) unsigned long long expectMaxKbps;
@property (copy, nonatomic) NSString *expectResolution;
@property (nonatomic) unsigned long long needResetToBitrate;
@property (nonatomic, getter=shouldReportPeakStatus) BOOL reportPeakStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchResolution:(id)a0 callback:(id /* block */)a1;
- (id)supportResolutions;
- (void)didSetGameCPDIContext;
- (void)onBlockDetectedReachedThreshold:(BOOL)a0;
- (void)initExpectResolutionConfiguration:(id)a0;
- (BOOL)isInAutoResolution;
- (void)switchBitrate:(unsigned long long)a0 fps:(unsigned long long)a1 callback:(id /* block */)a2;
- (void)switchToAutoResolutionWithCallback:(id /* block */)a0;
- (void)peakStatusChangeNotification:(id)a0;
- (BOOL)_isInAutoResolution;
- (void)updateOutterExtraTrackerInfoWithResolution:(id)a0;
- (void)discountResolutionWhenPeakTime:(id)a0 callback:(id /* block */)a1;
- (id)bitrateScene;
- (void)_onBlockReachThreshold;
- (void)_onBlockNotReachThreshold;
- (BOOL)_shouldTriggerAutoResolutionAction;
- (void)_switchAutoResolutionTrueResolutionWithDirection:(unsigned long long)a0 callback:(id /* block */)a1;
- (void)_showSwitchToAutoResolutionGuideIfNeeded;
- (void)_showSwitchAutoResolutionTrueResolutionGuideIfNeeded;
- (void)_trackAutoResolutionGuideClick:(id)a0;
- (void)_trackAutoResolutionGuideShow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationObserver;

@end
