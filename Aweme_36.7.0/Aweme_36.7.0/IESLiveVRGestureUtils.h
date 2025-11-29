@class UIPinchGestureRecognizer, UIPanGestureRecognizer;
@protocol IESLiveVRPanoramaModeActionLinsenner;

@interface IESLiveVRGestureUtils : NSObject

@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (nonatomic) struct CGPoint { double x; double y; } prePoint;
@property (nonatomic) float currentScale;
@property (nonatomic) float prevScale;
@property (weak, nonatomic) id<IESLiveVRPanoramaModeActionLinsenner> actionLinsener;
@property (nonatomic) float sScaleMin;
@property (nonatomic) float sScaleMax;
@property (nonatomic) long long initialOrientation;
@property (copy, nonatomic) id /* block */ panGesture;
@property (copy, nonatomic) id /* block */ receterNeeded;
@property (copy, nonatomic) id /* block */ dragDistance;
@property (nonatomic) float defaultZoom;

- (float)validateScale:(float)a0;
- (void)resetOrientation;
- (BOOL)showRecenterBubble:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 height:(double)a2;
- (void)addVRGestureToView:(id)a0 actionLinsener:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)panGesture:(id)a0;
- (void)pinchGesture:(id)a0;
- (void)resetZoom;

@end
