@class TSPKCustomAnchorReleaseDetectManager;

@interface TSPKCustomAnchorMonitor : NSObject

@property (retain, nonatomic) TSPKCustomAnchorReleaseDetectManager *cameraManager;
@property (retain, nonatomic) TSPKCustomAnchorReleaseDetectManager *audioOutputManager;
@property (retain, nonatomic) TSPKCustomAnchorReleaseDetectManager *audioAUGraphManager;

+ (id)shared;

- (double)detectDelay;
- (void)markAudioStartWithCaseId:(id)a0 description:(id)a1;
- (void)markAudioStopWithCaseId:(id)a0 description:(id)a1;
- (void)logBizCalledMethod:(id)a0 caseId:(id)a1 description:(id)a2;
- (BOOL)isEnableWithCaseId:(id)a0;
- (void)logFeatureDisabledWithCaseId:(id)a0;
- (long long)detectTime;
- (void)markCameraStartWithCaseId:(id)a0 description:(id)a1;
- (void)markCameraStopWithCaseId:(id)a0 description:(id)a1;
- (void).cxx_destruct;

@end
