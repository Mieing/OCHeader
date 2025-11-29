@class UIImageView, UILabel, ACCMusicSelectSoundWaveAnimationView, UIView;

@interface AWEMemoriesThemeEditThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) ACCMusicSelectSoundWaveAnimationView *playWaveView;
@property (retain, nonatomic) UIView *playWaveContainerView;
@property (retain, nonatomic) UIView *selectedIndicatorView;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
