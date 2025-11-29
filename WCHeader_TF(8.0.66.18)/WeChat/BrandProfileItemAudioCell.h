@class CAGradientLayer, BrandProfileItemAudioViewModel, UIImageView, UILabel;

@interface BrandProfileItemAudioCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemAudioViewModel *viewModel;
@property (retain, nonatomic) CAGradientLayer *coverMaskLayer;
@property (retain, nonatomic) UIImageView *audioIconView;
@property (retain, nonatomic) UILabel *audioTimeLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateTimeLabel;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
