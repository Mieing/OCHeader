@interface WeAppCore.WASiderbarView : MMUIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ weappCloseAction;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ toolView;
    void /* unknown type, empty encoding */ barContentView;
    void /* unknown type, empty encoding */ logic;
    void /* unknown type, empty encoding */ hasExposed;
    void /* unknown type, empty encoding */ impactHasOccurred;
}

@property (nonatomic) void /* unknown type, empty encoding */ constraitByContainer;
@property (nonatomic) void /* unknown type, empty encoding */ containerViewOrientation;
@property (nonatomic, copy) id /* block */ weappCloseAction;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithLogic:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)showInView:(id)a0;
- (void)prepareForShowIn:(id)a0;
- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (void)dismissFromDismissButton;
- (void)dismissFromBackground;
- (void)dismissAndReportWithAction:(long long)a0 animated:(BOOL)a1;
- (void)onCloseWeapp;
- (void)didRotate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
