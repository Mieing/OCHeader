@class LOTAnimationView, NSString, UIView;

@interface AWEFeedPendantTransitionLottieView : UIView <LOTAnimationDelegate>

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldFrame;
@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addLottieViewWithLottie:(id)a0;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)contentTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 lottie:(id)a3;
- (void)updateWithLottite:(id)a0;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 foldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)playAnimationFromFrame:(id)a0 toFrame:(id)a1 loop:(BOOL)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
