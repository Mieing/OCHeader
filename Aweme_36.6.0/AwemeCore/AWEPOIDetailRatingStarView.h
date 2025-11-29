@class UIImageView, CAShapeLayer;

@interface AWEPOIDetailRatingStarView : UIView {
    struct CGSize { double width; double height; } _imageSize;
}

@property (retain, nonatomic) UIImageView *selectedStarView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIImageView *unselectedStarView;

- (double)starHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)starWidth;
- (void)setPercent:(double)a0;

@end
