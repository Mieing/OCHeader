@class CAGradientLayer, BrandProfileItemReaderViewModel;

@interface BrandProfileItemReaderCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemReaderViewModel *viewModel;
@property (retain, nonatomic) CAGradientLayer *coverMaskLayer;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateCoverImageView;
- (void)updateTitleView;
- (void)updateDescLabel;
- (id)getTitleViewColor:(BOOL)a0;
- (id)getDescLabelColor:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
