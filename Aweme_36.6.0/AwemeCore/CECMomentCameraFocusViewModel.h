@class NSString;
@protocol CECMomentCameraFlowService, CECMomentCameraService;

@interface CECMomentCameraFocusViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber>

@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL interactionViewHidden;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
