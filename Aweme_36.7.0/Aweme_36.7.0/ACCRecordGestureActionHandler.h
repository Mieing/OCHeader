@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordGestureService, ACCCameraSwapService, ACCRecordPropService;

@interface ACCRecordGestureActionHandler : NSObject <ACCServiceBindable>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCCameraSwapService> cameraSwapService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (nonatomic) BOOL brightnessAdjusting;
@property (nonatomic) double lastZoomFactor;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL showSimpleZoomInfoTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)handleCameraSingleTapGesture:(id)a0;
- (void)handleCameraDoubleTapGesture:(id)a0;
- (void)handleCameraLongPressGesture:(id)a0;
- (void)handleAdjustBrightnessPanGesture:(id)a0;
- (void)handleCameraPinchGesture:(id)a0;
- (void).cxx_destruct;

@end
