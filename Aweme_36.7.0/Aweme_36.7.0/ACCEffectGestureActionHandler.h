@class NSString;
@protocol ACCCameraService;

@interface ACCEffectGestureActionHandler : NSObject <ACCServiceBindable>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)handleEffectDragGesture:(id)a0;
- (id)calculateLocationWithView:(id)a0 gesture:(id)a1 logSubTag:(id)a2;
- (id)_currentEffectID;
- (void)handleEffectTapGesture:(id)a0;
- (void)handleEffectLongTapGesture:(id)a0;
- (void)handleEffectPinchGesture:(id)a0;
- (void)handleEffectRotationGesture:(id)a0;
- (void).cxx_destruct;

@end
