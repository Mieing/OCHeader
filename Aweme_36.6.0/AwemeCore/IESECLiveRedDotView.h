@class UILabel;

@interface IESECLiveRedDotView : UIView {
    struct CGSize { double width; double height; } _contentSize;
}

@property (retain, nonatomic) UILabel *textLabel;

- (void)applyCornerRadius:(double)a0;
- (struct CGSize { double x0; double x1; })calContentSize;
- (void).cxx_destruct;
- (void)setNumber:(long long)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateSize;

@end
