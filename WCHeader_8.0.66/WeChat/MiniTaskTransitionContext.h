@class MinimizeTaskData, UIImage, MiniTaskEdgeGestureHandler, MultiTaskPageActionInfo;
@protocol MiniTaskTransitionAnimationDelegate, MinimizeTransitionInterface;

@interface MiniTaskTransitionContext : NSObject

@property (nonatomic) unsigned int fromSource;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrameToSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrameToWindow;
@property (retain, nonatomic) UIImage *dismissSnapshotImage;
@property (retain, nonatomic) UIImage *frontImage;
@property (copy, nonatomic) id /* block */ snapshotFrameGetter;
@property (copy, nonatomic) id /* block */ presentEndCallback;
@property (copy, nonatomic) id /* block */ dimissBeginCallback;
@property (copy, nonatomic) id /* block */ dimissEndCallback;
@property (retain, nonatomic) MiniTaskEdgeGestureHandler *presentGestureHandler;
@property (nonatomic) BOOL isPresent;
@property (weak, nonatomic) id<MiniTaskTransitionAnimationDelegate> animationDelegate;
@property (nonatomic) double fadeAnimateDuration;
@property (nonatomic) unsigned int animationType;
@property (retain, nonatomic) MultiTaskPageActionInfo *pageActionInfo;
@property (nonatomic) BOOL isFromFlutterScenes;
@property (retain, nonatomic) MinimizeTaskData *taskDataForMinimizeTransition;
@property (weak, nonatomic) id<MinimizeTransitionInterface> minimizeTransitionDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } starFloatingFrameToWindow;
@property (nonatomic) BOOL hasTriggerInteractiveAppend;
@property (nonatomic) BOOL enableRightEdgePanGesture;
@property (nonatomic) BOOL enableAddStarCorner;

- (void)tryUpdateSnapshotFrame;
- (void)onPresentTransitionEnd:(BOOL)a0;
- (void)onDismissTransitionBegin:(unsigned int)a0;
- (void)onDismissTransitionEnd:(unsigned int)a0 finish:(BOOL)a1;
- (void).cxx_destruct;

@end
