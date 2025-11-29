@class UIImageView, CAShapeLayer;

@interface DVEFramePickerItem : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *roundMask;
@property (nonatomic) unsigned long long locationType;

- (void)updateCorner;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
