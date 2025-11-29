@interface AWEStudioRecordImpl.AWEStudioBusinessCameraServiceContext : NSObject <AWEStudioBusinessCameraFlowControlProtocol, AWEStudioCameraObserverActionMessageProtocol> {
    void /* unknown type, empty encoding */ cameraService;
    void /* unknown type, empty encoding */ cameraSession;
    void /* unknown type, empty encoding */ cameraFlowAction;
    void /* unknown type, empty encoding */ currentCameraService;
    void /* unknown type, empty encoding */ cameraFlowMap;
    void /* unknown type, empty encoding */ recordUIFirstFrameFlag;
    void /* unknown type, empty encoding */ recordCameraFirstFrameFlag;
    void /* unknown type, empty encoding */ cameraMessageList;
    void /* unknown type, empty encoding */ flowResultSubscriber;
    void /* unknown type, empty encoding */ frameSamplingFlowResultSubscriber;
    void /* unknown type, empty encoding */ _behaviorLog;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraFlowVerify;
}

- (id /* block */)wrappedCameraActionBlock;
- (void)createCameraWith:(id)a0 cameraSession:(id)a1;
- (id)getCameraService;
- (void)recordPageUIFirstFrameFinished;
- (id)currentFlowAction;
- (BOOL)currentIsRecordFlow;
- (void)startFlowActionWith:(id)a0;
- (void)pauseFlowAction;
- (void)continueFlowAction;
- (void)deletedLastSegmentAction;
- (void)finishFlowAction;
- (void)destroyFlowAction:(BOOL)a0;
- (void)cancelFlowAction;
- (void)addSubscriber:(id)a0;
- (void)cameraActionWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
