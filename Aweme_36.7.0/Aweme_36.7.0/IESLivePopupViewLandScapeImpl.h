@class NSString, IESLivePopupItem, UIView, UITapGestureRecognizer;

@interface IESLivePopupViewLandScapeImpl : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate, IESLivePopupView>

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL showing;
@property (weak, nonatomic) IESLivePopupItem *item;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBackAfterPan;
- (void)setupContianer;
- (void)showInAutoLayout;
- (void)showforKey:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })showingFrame;
- (void)setVisible:(BOOL)a0 withAnimated:(BOOL)a1;
- (void)tap:(id)a0;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)layoutSubviews;
- (void)_setup;
- (void)dealloc;
- (void)show;
- (id)initWithItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightFrame;
- (void)updateFrame;
- (void)p_addObservers;

@end
