@class DVESegmentClipBorderView, ACCAdvanceEditExpandClickView, UIView;

@interface ACCAdvanceEditSegmentClipView : DVESegmentClipView

@property (retain, nonatomic) ACCAdvanceEditExpandClickView *leftArrowView;
@property (retain, nonatomic) ACCAdvanceEditExpandClickView *rightArrowView;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;

+ (double)arrowWidth;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setEditClipViewHidden:(BOOL)a0;
- (void)setBorderClipViewHidden:(BOOL)a0;
- (id)initWithMode:(unsigned long long)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)space;
- (double)lineHeight;
- (void)setupUI;
- (void)setupGestures;

@end
