@class UIImageView, UIColor;

@interface CircleProcessView : MMUIView {
    double width;
    double height;
}

@property (retain, nonatomic) UIImageView *bgImage;
@property (nonatomic) double value;
@property (retain, nonatomic) UIColor *progressTintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0;
- (void).cxx_destruct;

@end
