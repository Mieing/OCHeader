@class UIImageView, AWEPhotoMovieMusicItemCircleView, UILabel;

@interface AWEPhotoMovieMusicItemView : UIButton

@property (retain, nonatomic) UIImageView *musicImageView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) AWEPhotoMovieMusicItemCircleView *circleView;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) UILabel *durationLabel;

- (id)initWithRectangleImageSize:(struct CGSize { double x0; double x1; })a0 radius:(double)a1;
- (void)setMusicThumbnailURLList:(id)a0;
- (id)initWithRectangleImageSize:(struct CGSize { double x0; double x1; })a0 circleViewOffset:(double)a1 radius:(double)a2 lineWidth:(double)a3;
- (void)setMusicThumbnailURLList:(id)a0 placeholder:(id)a1;
- (id)p_timeStringWithDuration:(double)a0;
- (id)initWithRectangleImageSize:(struct CGSize { double x0; double x1; })a0 circleViewOffset:(double)a1 radius:(double)a2;
- (void)setMusicBackgroundColor:(id)a0;
- (void)setDuration:(double)a0 show:(BOOL)a1;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;

@end
