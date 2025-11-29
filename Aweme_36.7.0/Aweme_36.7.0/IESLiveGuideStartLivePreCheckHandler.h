@class IESLiveGuideCameraMicroChecker, IESLiveGuideModel, IESLiveAuthorizationApi;

@interface IESLiveGuideStartLivePreCheckHandler : NSObject

@property (retain, nonatomic) IESLiveGuideCameraMicroChecker *cameraMicroChecker;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) IESLiveAuthorizationApi *authApi;
@property (nonatomic) BOOL shouldContinue;

- (BOOL)checkCameraAndMicro;
- (void)checkHAuthorization;
- (id)initWithGuideModel:(id)a0 attachingDIContext:(id)a1;
- (void)monitorClickOpenLiveFailed:(id)a0;
- (BOOL)checkViolationOfMedia;
- (BOOL)checkUserStatusForOpenLive;
- (BOOL)checkUserOutterLimitsForOpenLive;
- (BOOL)checkViolationOfSafety;
- (BOOL)checkFishEyeLiveLimitsForOpenLive;
- (BOOL)precheckVipCondition;
- (void)continueCheckPrecondition:(id /* block */)a0;
- (void)trackTakeButtonVerify:(BOOL)a0 reason:(id)a1 liveType:(id)a2;
- (void)continueCreateLiveWithTimeStamp:(double)a0 completeBlock:(id /* block */)a1;
- (void)checkPrecondition:(id /* block */)a0;
- (void).cxx_destruct;

@end
