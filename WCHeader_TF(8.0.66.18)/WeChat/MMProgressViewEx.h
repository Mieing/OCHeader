@class UIColor, NSString, MMProgressViewExLayer;

@interface MMProgressViewEx : UIView <CAAnimationDelegate> {
    MMProgressViewExLayer *m_layer;
}

@property (nonatomic) BOOL autoContinue;
@property (nonatomic) double total;
@property (nonatomic) double current;
@property (retain, nonatomic) UIColor *frontColor;
@property (retain, nonatomic) UIColor *backColor;
@property (nonatomic) double stepDuration;
@property (nonatomic) BOOL hideOnCompleteProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)doAnimation;
- (void)doAnimation_v2;
- (void)hideSelf;
- (void)animateBecomeActive:(id)a0;
- (void)didMoveToWindow;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)autoContinueAnimate;
- (void)startLoading;
- (void)startLoadingWithImage:(id)a0;
- (void)stopLoading;
- (void).cxx_destruct;

@end
