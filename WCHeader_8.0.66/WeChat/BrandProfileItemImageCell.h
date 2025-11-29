@class CAGradientLayer, UIImageView, BrandProfileItemImageViewModel, MMUILabel;

@interface BrandProfileItemImageCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemImageViewModel *viewModel;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) MMUILabel *imageCountLabel;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)updateTitleAndDescTextColor;
- (void)layoutSubviews;
- (void)layoutSingleBigCoverSytle;
- (void)layoutBigCoverStyle;
- (void)layoutBigCoverStyleCoverAndNum;
- (void)layoutSmallCoverSytle;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
