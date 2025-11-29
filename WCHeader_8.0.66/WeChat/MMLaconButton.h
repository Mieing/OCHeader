@class MMUILabel, UIView;

@interface MMLaconButton : MMUIButton

@property (retain, nonatomic) UIView *leftImage;
@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) UIView *rightImage;
@property (nonatomic) double buttonLeftPadding;
@property (nonatomic) double buttonRightPadding;
@property (nonatomic) double leftImageMargin;
@property (nonatomic) double rightImageMargin;
@property (nonatomic) BOOL bUseMaskHighlightedEffect;
@property (retain, nonatomic) UIView *curMaskView;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateStatus;
- (void)doLayouts;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
