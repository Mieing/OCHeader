@class UIStackView, DUXTextTag, UIView, ACCAnimatedButton, UILongPressGestureRecognizer, UIImageView, UIButton, RTVVoipRingtoneSelectSoundWaveAnimationView, UILabel, RTVVoipRingtoneItemViewModel;
@protocol RTVVoipRingtoneCollectionViewCellDelegate, RTVVoipRingtoneComponentInterface;

@interface RTVVoipRingtoneCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) RTVVoipRingtoneItemViewModel *itemViewModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverIndicatorView;
@property (retain, nonatomic) UIStackView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RTVVoipRingtoneSelectSoundWaveAnimationView *spectralView;
@property (retain, nonatomic) UIStackView *subtitleContainerView;
@property (retain, nonatomic) DUXTextTag *recommendTag;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UIStackView *buttonContainerView;
@property (retain, nonatomic) UIButton *favoriteButton;
@property (retain, nonatomic) UIView *applyButtonWrapper;
@property (retain, nonatomic) ACCAnimatedButton *applyButton;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIView *loadingMaskView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) id<RTVVoipRingtoneComponentInterface> ringtoneComponent;
@property (weak, nonatomic) id<RTVVoipRingtoneCollectionViewCellDelegate> delegate;

+ (double)cellHeight;

- (void)favoriteButtonTapped;
- (void)applyButtonTapped;
- (void)openSimpleMode;
- (void)configWithViewModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (id)accessibilityString;

@end
