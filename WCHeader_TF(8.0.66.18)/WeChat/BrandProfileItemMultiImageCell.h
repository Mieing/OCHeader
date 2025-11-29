@class UIStackView, NSMutableArray, BrandProfileItemMultiImageViewModel, BrandMultiImageCoverView, BrandImageCountView, BrandImageCoverGradientView;

@interface BrandProfileItemMultiImageCell : BrandProfileItemBaseCell

@property (retain, nonatomic) BrandProfileItemMultiImageViewModel *viewModel;
@property (retain, nonatomic) BrandMultiImageCoverView *multiCoverView;
@property (retain, nonatomic) BrandImageCountView *imageCountView;
@property (retain, nonatomic) BrandImageCoverGradientView *gradientBGView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) NSMutableArray *textInsideCoverConstraints;
@property (retain, nonatomic) NSMutableArray *textOutsideCoverConstraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupCoverViews;
- (void)setupImageCountViews;
- (void)setupTitleViews;
- (void)onUpdateViewModel;
- (void)updateTitleView;
- (void)updateCoverImageViews;
- (void)updateTextInsideCoverStyle;
- (void)updateTextOutsideCoverStyle;
- (void).cxx_destruct;

@end
