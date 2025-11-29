@class MMUIView, MMUILabel, QBarCodeView;

@interface WCPayOrderDetailBarView : MMUIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldFrame;
    BOOL _inAnimation;
    double _oldBrightness;
}

@property (retain, nonatomic) MMUILabel *barCodeLabel;
@property (retain, nonatomic) QBarCodeView *imageBarView;
@property (retain, nonatomic) MMUIView *container;
@property (retain, nonatomic) MMUIView *orderMaskView;

+ (double)barCodeWidth;

- (id)init;
- (void)commonInit;
- (void)codeViewTapped:(id)a0;
- (void)exitFullScreenWithView:(id)a0 animation:(BOOL)a1;
- (void)updateCode:(id)a0;
- (BOOL)inFullscreen;
- (void).cxx_destruct;

@end
