@class NSString, UIView;

@interface AWEUGPendantContentBaseView : UIView <AWEUGPendantContentProtocol>

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ contentTapHandler;
@property (copy, nonatomic) id /* block */ contentLottieSwitched;
@property (copy, nonatomic) id /* block */ animationFrameHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentBGView;
- (id)expandView;
- (id)foldView;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2 animationStart:(id /* block */)a3 animationEnd:(id /* block */)a4;
- (void)contentTapped;
- (void)playAnimationFromFrame:(id)a0 toFrame:(id)a1 loop:(BOOL)a2 complete:(id /* block */)a3;
- (void)playLoopAniamtion;
- (void)updateUIWithExpandLottie:(id)a0 foldLottie:(id)a1;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)pauseAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
