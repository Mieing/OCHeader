@class UIImageView, UILabel, UIView, ACCMusicSelectSoundWaveAnimationView;

@interface ACCTemplateSegmentSelectCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) ACCMusicSelectSoundWaveAnimationView *playWaveView;
@property (retain, nonatomic) UIView *indicatorView;

- (void)updateImageViewCornerRadius:(double)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
