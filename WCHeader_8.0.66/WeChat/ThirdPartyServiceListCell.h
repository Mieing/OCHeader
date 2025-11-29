@class UIImageView, MMUILabel, NSString;

@interface ThirdPartyServiceListCell : MMUIView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
