@class AWEScrollStringLabel, UIView;

@interface AWEVideoEffectViewTimeCell : AWEVideoEffectViewCollectionCell

@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) AWEScrollStringLabel *titleLabel;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;

@end
