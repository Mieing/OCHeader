@class NSString;
@protocol IESLiveEffectProcessService;

@interface IESLiveGuideCameraProcessor : NSObject <IESLiveTouchableViewDelegate>

@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcesser;
@property (nonatomic) BOOL openGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)handleTouchDown:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handleTouchUp:(struct CGPoint { double x0; double x1; })a0 withType:(unsigned long long)a1;
- (BOOL)handlePanEventWithTranslation:(struct CGPoint { double x0; double x1; })a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)handleLongPressEventWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleScaleEvent:(double)a0;
- (BOOL)touchableViewPointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)touchableViewHandleTouchEvent:(struct CGPoint { double x0; double x1; })a0 pointerId:(unsigned int)a1 force:(float)a2 majorRadius:(float)a3 eventType:(unsigned long long)a4 pointerCount:(int)a5;
- (void).cxx_destruct;
- (id)init;
- (BOOL)handleTouchEvent:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleRotationEvent:(double)a0;

@end
