@class NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraService;

@interface AFDMomentCameraFocusViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraFlowServiceSubscriber>

@property (nonatomic) struct CGPoint { double x; double y; } focusPoint;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL interactionViewHidden;
@property (weak, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
