@class UITapGestureRecognizer, UIView;

@interface DUXActionTag : DUXTag

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *interactionMaskView;
@property (nonatomic) double maxScale;
@property (nonatomic) long long style;
@property (nonatomic) long long sizeStyle;
@property (nonatomic) long long fontWeight;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1 title:(id)a2 enlargeType:(unsigned long long)a3;
- (id)initWithStyle:(long long)a0 sizeStyle:(long long)a1 title:(id)a2;
- (void)tapGestureAction;
- (void)intrinsicActionSizeStyle;
- (void)intrinsicActionStyle;
- (void)intrinsicIconImage;
- (double)intrinsicIconSize;
- (double)p_intrinsicContentHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;

@end
