@class IESECLiveContext, IESECLiveInteractionVibeItemViewV2, IESECGCDTimer, NSMutableArray;

@interface IESECLiveInteractionVibeViewV2 : IESECEventForwardingView

@property (retain, nonatomic) NSMutableArray *curVibeModels;
@property (retain, nonatomic) IESECLiveInteractionVibeItemViewV2 *displayVibeView;
@property (nonatomic) long long nextDisplayIndex;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) IESECGCDTimer *displayTimer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } onShowRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dismissRect;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) BOOL useRightAlignedLayout;
@property (nonatomic) double interactionVibeItemHeight;
@property (nonatomic) double InteractionVibeAnimationGap;

- (double)animationGap;
- (double)itemHeight:(id)a0;
- (void)setupTimerIfNeeded;
- (id)initWithLiveContext:(id)a0;
- (void)forceLoginWithClickCompletion:(id /* block */)a0;
- (void)endAllDisplay;
- (void)appendVibeModels:(id)a0 cleanOldData:(BOOL)a1;
- (void)generateAnimationFrames;
- (id)p_curShowVibe;
- (void)executeAnimationFromView:(id)a0 toView:(id)a1;
- (void)p_clickVibeViewWithModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })animationRectOfView:(id)a0 type:(long long)a1;
- (void)p_trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)showNextVibeModel;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)invalidateTimer;
- (void)layoutSubviews;

@end
