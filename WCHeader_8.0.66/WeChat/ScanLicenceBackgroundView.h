@class UIImage;

@interface ScanLicenceBackgroundView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskRect;
    UIImage *_leftTopImage;
    UIImage *_rightTopImage;
    UIImage *_leftBottomImage;
    UIImage *_rightBottomImage;
    double _lengthWidthRatio;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTypeRatio:(double)a1;
- (void)commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
