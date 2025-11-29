@class YYTextLayout, UIView, NSMutableArray, YYTextDebugOption;

@interface YYTextContainerView : UIView {
    BOOL _attachmentChanged;
    NSMutableArray *_attachmentViews;
    NSMutableArray *_attachmentLayers;
}

@property (weak, nonatomic) UIView *hostView;
@property (copy, nonatomic) YYTextDebugOption *debugOption;
@property (nonatomic) long long textVerticalAlignment;
@property (retain, nonatomic) YYTextLayout *layout;
@property (nonatomic) double contentsFadeDuration;

- (void)setLayout:(id)a0 withFadeDuration:(double)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
