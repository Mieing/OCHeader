@class IESLiveVRIndicator, IESLiveVRRecenterView, IESLiveVRGestureUtils, IESLiveVRCloseButton, UIButton;
@protocol IESLiveVRPanoramaModeActionLinsenner;

@interface IESLiveVRPanoramaModeContainer : UIView

@property (retain, nonatomic) IESLiveVRCloseButton *closeButton;
@property (retain, nonatomic) UIButton *xButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIButton *orientationButton;
@property (retain, nonatomic) IESLiveVRIndicator *indicator;
@property (retain, nonatomic) IESLiveVRRecenterView *recenterView;
@property (nonatomic) struct CGPoint { double x; double y; } indicatorPrePoint;
@property (nonatomic) BOOL dragIndicator;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preTransform;
@property (nonatomic) BOOL gyroOpen;
@property (nonatomic) int recenterViewShowTimes;
@property (retain, nonatomic) IESLiveVRGestureUtils *gestureUtils;
@property (weak, nonatomic) id<IESLiveVRPanoramaModeActionLinsenner> actionLinsener;
@property (nonatomic) struct EulerAngles { double x0; double x1; double x2; } *initialAngle;
@property (nonatomic) float defaultZoom;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIButton *gyroButton;
@property (nonatomic) BOOL vrLandscapeEnable;
@property (nonatomic) BOOL interactiveOpt;

- (void)setUI;
- (void)quaternionWithQuatX:(float)a0 quatY:(float)a1 quatZ:(float)a2 quatW:(float)a3 posX:(float)a4 posY:(float)a5 posZ:(float)a6;
- (void)resetOrientation;
- (void)excuteTimerTask;
- (void)orientationAction:(id)a0;
- (id)initWithActionLinsener:(id)a0 defaultZoom:(float)a1;
- (void)calculateDragIndicatorWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)calculateDragIndicatorEndWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showRecenterView;
- (void)blockPanGesture:(id)a0;
- (void)recenerTapGesture:(id)a0;
- (void)closePanoramaModeAction:(id)a0;
- (void)gyroModeAction:(id)a0;
- (void)recenterAction:(id)a0;
- (void)exitLiveRoom:(id)a0;
- (void).cxx_destruct;
- (void)rotateToOrientation:(long long)a0;
- (void)reset;
- (void)dealloc;
- (void)resetZoom;

@end
