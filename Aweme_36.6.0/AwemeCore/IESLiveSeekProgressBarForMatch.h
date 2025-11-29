@class MASConstraint, NSArray, IESLiveSeekProgressIndicatorForMatch, UIView, NSMutableArray, NSNumber;
@protocol IESLiveRoomService;

@interface IESLiveSeekProgressBarForMatch : UIView

@property (nonatomic) double progressWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isPaning;
@property (nonatomic) double tmpProgress;
@property (nonatomic) double touchBeginProgress;
@property (retain, nonatomic) NSArray *signModels;
@property (retain, nonatomic) NSMutableArray *signViews;
@property (readonly, nonatomic) double seekPointHeight;
@property (nonatomic) long long lastCount;
@property (retain, nonatomic) NSNumber *lastRemakeOrientation;
@property (weak, nonatomic) MASConstraint *panGestureLeadingConstraint;
@property (weak, nonatomic) MASConstraint *panGestureTrailingConstraint;
@property (weak, nonatomic) UIView *toolbarContainer;
@property (weak, nonatomic) UIView *profileContainer;
@property (weak, nonatomic) UIView *entranceContainer;
@property (weak, nonatomic) UIView *activityContainer;
@property (weak, nonatomic) UIView *publicScreenContainer;
@property (nonatomic) BOOL enableReCalculate;
@property (nonatomic) double fixProgressWidth;
@property (copy, nonatomic) id /* block */ seekAction;
@property (weak, nonatomic) UIView *matchWatchDurationLabel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ panGestureAnimationStart;
@property (copy, nonatomic) id /* block */ panGestureAnimationStop;
@property (retain, nonatomic) MASConstraint *leadingConstraint;
@property (retain, nonatomic) MASConstraint *trailingConstraint;
@property (retain, nonatomic) IESLiveSeekProgressIndicatorForMatch *progressIndicator;

- (void)loadSubviews;
- (void)updateWithOrientation:(BOOL)a0;
- (void)coloringProgressWithModels:(id)a0;
- (void)bindAttachingDIContext;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (void)colorWithSingleColor:(id)a0;
- (void)onSeekBeginAnimation:(BOOL)a0;
- (void)onSeekEndAnimation:(BOOL)a0;
- (void)handleIndicatorNodesHidden:(BOOL)a0;
- (void)updateSignViewWithType:(long long)a0;
- (void)invokeLandscapeNewStyleSeekStartAnimation;
- (void)invokeLandscapeNewStyleSeekStopAnimation;
- (void)didPanGrogress:(id)a0;
- (void)didTapSign:(id)a0;
- (void)didTapProgress:(id)a0;
- (void)dressupWithSkin:(id)a0;
- (void)didPanGrogress:(id)a0 holderView:(id)a1;
- (void)execSeekAction:(double)a0 source:(unsigned long long)a1 needSeek:(BOOL)a2;
- (void)refreshDotUserInterfaceEnable:(BOOL)a0;
- (void)invokePortraitSeekStartAnimation;
- (void)invokePortraitSeekStopAnimation;
- (void)calculateModelsStart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateWithProgress:(double)a0;

@end
