@class UIView, NSString, NSArray, IESLivePlaybackSeekProgressIndicator, MASConstraint, UIPanGestureRecognizer, NSMutableArray, NSNumber;

@interface IESLivePlaybackSeekProgressBar : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double tmpProgress;
@property (nonatomic) double touchBeginProgress;
@property (retain, nonatomic) NSArray *signModels;
@property (retain, nonatomic) IESLivePlaybackSeekProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSMutableArray *signViews;
@property (readonly, nonatomic) double seekPointHeight;
@property (nonatomic) long long lastCount;
@property (retain, nonatomic) NSNumber *lastRemakeOrientation;
@property (retain, nonatomic) MASConstraint *panGestureLeadingConstraint;
@property (retain, nonatomic) MASConstraint *panGestureTrailingConstraint;
@property (weak, nonatomic) UIView *toolbarContainer;
@property (weak, nonatomic) UIView *profileContainer;
@property (weak, nonatomic) UIView *entranceContainer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL isHideBeforeSeekForPlayerControl;
@property (copy, nonatomic) id /* block */ seekAction;
@property (copy, nonatomic) id /* block */ accessibilityAction;
@property (nonatomic) BOOL trailFinish;
@property (copy, nonatomic) id /* block */ enableSeekWhenShow;
@property (copy, nonatomic) id /* block */ panGestureAnimationStart;
@property (copy, nonatomic) id /* block */ panGestureAnimationStop;
@property (retain, nonatomic) MASConstraint *leadingConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)loadSubviews;
- (void)updateWithOrientation:(BOOL)a0;
- (void)handleAccessibilityWithIncrease:(BOOL)a0;
- (void)coloringProgressWithModels:(id)a0;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (void)colorWithSingleColor:(id)a0;
- (void)onSeekBeginAnimation:(BOOL)a0;
- (void)onSeekEndAnimation:(BOOL)a0;
- (void)handleIndicatorNodesHidden:(BOOL)a0;
- (void)updateSignViewWithType:(long long)a0;
- (void)invokePortraitForFullScreenSeekStartAnimation;
- (void)invokeLandscapeNewStyleSeekStartAnimation;
- (void)invokePortraitNewStyleSeekStartAnimation;
- (void)invokePortraitForFullScreenSeekStopAnimation;
- (void)invokeLandscapeNewStyleSeekStopAnimation;
- (void)invokePortraitNewStyleSeekStopAnimation;
- (void)didPanGrogress:(id)a0;
- (void)execSeekAction:(double)a0 needSeek:(BOOL)a1;
- (void)didTapSign:(id)a0;
- (void)didTapProgress:(id)a0;
- (void)dressupWithSkin:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)updateWithProgress:(double)a0;

@end
