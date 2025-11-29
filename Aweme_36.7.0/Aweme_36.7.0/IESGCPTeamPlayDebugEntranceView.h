@class NSArray, UIImageView, IESGCPTimer, UIPanGestureRecognizer;

@interface IESGCPTeamPlayDebugEntranceView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beforDragFrame;
@property (retain, nonatomic) IESGCPTimer *suckToTheSideTimer;
@property (retain, nonatomic) NSArray *gameList;
@property (retain, nonatomic) NSArray *gameListDebug;

+ (id)teamplayEntranceView;
+ (id)debugEntranceView;

- (void)_onSelfClicked:(id)a0;
- (void)_setupTeamPlayGesture;
- (void)_setupDebugGesture;
- (void)_onDebugSelfClicked:(id)a0;
- (void)popUpSecondAlertController:(id)a0;
- (void)_handlePanGestureBegan;
- (void)_handlePanGestureUnderway:(id)a0;
- (void)_handlePanGestureEnded;
- (void)_invalidateSuckToTheSideTimerTimer;
- (void)_safeUpdateFrame:(id)a0;
- (void)_delaySuckToTheSide;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stickPointByScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getSafeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewSafeArea;
- (void)dismiss;
- (void).cxx_destruct;
- (void)_pan:(id)a0;
- (void)layoutSubviews;
- (void)show;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
