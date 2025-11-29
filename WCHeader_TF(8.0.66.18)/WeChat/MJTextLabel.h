@interface MJTextLabel : MMTextView

@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commonInit;
- (void)layoutSubviews;
- (void)updateTextContainerInset;
- (void)sizeToFitWidth:(double)a0 lineBreakMode:(long long)a1;

@end
