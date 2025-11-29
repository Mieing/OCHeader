@class NSString;

@interface IESGCPCGFeedbackComponent : IESGCPCGInstanceBaseComponent <IESGCPCGPerfsMonitorDetectActions>

@property (nonatomic) long long bigStallShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)onFrameRateBigStall;
- (void)onBlockDetectedReachedThreshold:(BOOL)a0;
- (void)onBitrateDetectedBelowThreshold;
- (void)onContinuousBlackFrameDetected;
- (void)_showFloatFeedbackViewWithAbnormalScene:(unsigned long long)a0;
- (id)_abnormalStringWithEnum:(unsigned long long)a0;
- (void)_onFeedbackClickedWithScene:(unsigned long long)a0;

@end
