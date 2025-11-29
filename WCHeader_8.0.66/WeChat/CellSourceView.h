@class UIColor, UIView;

@interface CellSourceView : UIView

@property (nonatomic) unsigned long long bubbleType;
@property (retain, nonatomic) UIColor *fixedBackgroundColor;
@property (retain, nonatomic) UIView *separatorLineView;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double separatorLineHeight;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fixedBackgroundColor:(id)a1 bubbleType:(unsigned long long)a2 separatorColor:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fixedBackgroundColor:(id)a1 bubbleType:(unsigned long long)a2 separatorColor:(id)a3 horizontalPadding:(double)a4 separatorLineHeight:(double)a5;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)shouldShowSeparator;
- (id)separatorColor;
- (void).cxx_destruct;

@end
