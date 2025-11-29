@class LOTComposition, NSString, LOTAnimationView, NSNumber;

@interface AWEUGPendantLottieView : AWEUGPendantContentBaseView <LOTAnimationDelegate>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftFoldFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightEdgeFrame;
@property (retain, nonatomic) LOTComposition *foldLottie;
@property (retain, nonatomic) LOTComposition *rightFoldLottie;
@property (readonly, nonatomic) LOTAnimationView *foldedView;
@property (readonly, nonatomic) LOTAnimationView *expandedView;
@property (retain, nonatomic) NSNumber *expandedLoopStart;
@property (retain, nonatomic) NSNumber *expandedLoopEnd;
@property (retain, nonatomic) NSNumber *foldLoopStart;
@property (retain, nonatomic) NSNumber *foldLoopEnd;
@property (nonatomic) BOOL rightAlignScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationView:(id)a0 isDisplayingFrame:(float)a1;
- (id)expandView;
- (id)foldView;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)playAnimationFromFrame:(id)a0 toFrame:(id)a1 loop:(BOOL)a2 complete:(id /* block */)a3;
- (void)playLoopAniamtion;
- (void)performRightsideUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)switchPlayingLottieViewWithFolded:(BOOL)a0;
- (void)animateWithDuration:(double)a0 timingFunction:(id)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)performContentZoomAnimation:(BOOL)a0;
- (void)performEdgeDraggingEndAnimation:(BOOL)a0;
- (void)performFoldingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performExpandingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performEdgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performUnedgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rightFoldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 foldedLottie:(id)a4 rightFoldedLottie:(id)a5 expandedLottie:(id)a6;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 rightFoldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 foldedLottie:(id)a4 rightFoldedLottie:(id)a5 expandedLottie:(id)a6;
- (id)addLottieViewWithLottie:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performRightsideEdgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)performRightsideUnedgingAnimationWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)eventualRightsideEdgedStatusWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)eventualRightsideExpandedStatusWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)eventualEdgedStatusWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void)eventualExpanedStatusWithAnimationStart:(id /* block */)a0 animationEnd:(id /* block */)a1;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)pauseAnimation;

@end
