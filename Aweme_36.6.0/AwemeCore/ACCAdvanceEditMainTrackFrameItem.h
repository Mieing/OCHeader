@class UIImageView;

@interface ACCAdvanceEditMainTrackFrameItem : UICollectionViewCell

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (retain, nonatomic) UIImageView *imageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
