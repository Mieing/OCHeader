@class NSArray;

@interface AWEGradientBorderView : UIView

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSArray *colors;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
