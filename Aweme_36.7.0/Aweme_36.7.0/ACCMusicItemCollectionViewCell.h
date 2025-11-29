@class UIStackView, DUXTextTag, ACCGradientView, UIView, UILongPressGestureRecognizer, UIImageView, UIButton, ACCMusicUIThemeModel, ACCMusicSelectSoundWaveAnimationView, UILabel;
@protocol ACCMusicItemCollectionViewCellDelegate;

@interface ACCMusicItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (retain, nonatomic) UIView *coverIndicatorView;
@property (retain, nonatomic) UIStackView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) ACCMusicSelectSoundWaveAnimationView *spectralView;
@property (retain, nonatomic) UIStackView *subtitleContainerView;
@property (retain, nonatomic) DUXTextTag *recommendTag;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIStackView *buttonContainerView;
@property (retain, nonatomic) UIButton *clipButton;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) UIView *applyButtonWrapper;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIView *loadingMaskView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) UIView *sourceBackView;
@property (retain, nonatomic) UILabel *musicRecallSourceLabel;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (weak, nonatomic) id<ACCMusicItemCollectionViewCellDelegate> delegate;

+ (double)cellHeight;

- (void)configWithViewModel:(id)a0 isFavoriteTab:(BOOL)a1;
- (void)clipButtonTapped;
- (void)favoriteButtonTapped;
- (void)updateButton:(id)a0 normalIcon:(id)a1 selectedIcon:(id)a2 dark:(BOOL)a3;
- (void)applyButtonTapped;
- (void)openSimpleMode;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (id)accessibilityString;
- (void)longPressGestureRecognized:(id)a0;

@end
