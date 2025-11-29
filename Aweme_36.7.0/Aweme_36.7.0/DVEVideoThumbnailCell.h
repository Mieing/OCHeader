@class UIImageView, NSString;

@interface DVEVideoThumbnailCell : UIView

@property (nonatomic) long long index;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
