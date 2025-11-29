@class UIImageView, UIColor, UIView;

@interface CAKAlbumVideoPreviewSliderView : UIView

@property (retain, nonatomic) UIView *minimumTrackView;
@property (retain, nonatomic) UIView *maximumTrackView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (nonatomic) double thumbWidth;
@property (nonatomic) double thumbHeight;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) double trackHeight;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;

- (void)setThumbImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
