@class MMUIImageView, WCStoryPreviewReportObj, UIView, MMUIView, WCStorysPreviewViewController, NSDate, MMUILabel;

@interface WCStoryDragAnimationUtil : MMObject

@property (weak, nonatomic) WCStorysPreviewViewController *backViewController;
@property (retain, nonatomic) MMUIView *muteBtnView;
@property (weak, nonatomic) MMUIImageView *muteBtnImageView;
@property (weak, nonatomic) MMUILabel *muteBtnLabel;
@property (nonatomic) double frontViewTop;
@property (copy, nonatomic) id /* block */ animationInHide;
@property (copy, nonatomic) id /* block */ hideCompletetion;
@property (copy, nonatomic) id /* block */ autoHideCompletetion;
@property (copy, nonatomic) id /* block */ animationInShow;
@property (copy, nonatomic) id /* block */ showCompletetion;
@property (retain, nonatomic) NSDate *dragStartTime;
@property (nonatomic) double lastMovement;
@property (nonatomic) double beginTouchPosY;
@property (nonatomic) double lastTouchPosY;
@property (nonatomic) BOOL hasTriggerDragShock;
@property (nonatomic) BOOL hasTriggerPlayMuteShock;
@property (nonatomic) BOOL isPlayingMuted;
@property (nonatomic) BOOL bBackViewShow;
@property (retain, nonatomic) WCStoryPreviewReportObj *previewReportObj;
@property (nonatomic) BOOL isFullScreenShowStory;
@property (weak, nonatomic) UIView *frontView;
@property (weak, nonatomic) UIView *backView;
@property (nonatomic) unsigned long long utilType;

+ (void)lightShock;
+ (void)errorShock;
+ (id)storyDragAnimationUtilWithFrontView:(id)a0 backView:(id)a1 frontViewTop:(double)a2;
+ (double)distanceToLeftBottom:(struct CGPoint { double x0; double x1; })a0;
+ (double)distanceFromtPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

- (id)initWithFrontView:(id)a0 backViewController:(id)a1 frontViewTop:(double)a2;
- (void)dealloc;
- (void)setMutebtnViewBigger:(BOOL)a0;
- (void)setHideAnimation:(id /* block */)a0 hideCompletetion:(id /* block */)a1;
- (void)setShowAnimation:(id /* block */)a0 showCompletetion:(id /* block */)a1;
- (BOOL)isPanInMuteView:(id)a0;
- (void)processFrontViewGesture:(id)a0;
- (void)moveMutePlayViewWithMovement:(double)a0;
- (void)processBackViewGestureWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 andState:(long long)a1;
- (void)hideFrontViewAndPlayMute:(BOOL)a0;
- (void)autoHideFrontViewCompletetion:(id /* block */)a0;
- (void)showFrontView:(BOOL)a0;
- (BOOL)canAutoPlayByFirstTakePhoto;
- (void).cxx_destruct;

@end
