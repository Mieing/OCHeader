@class UIStackView, AWEIMEnterpriseModeExpandedDataBannerTagView, UILabel, AWEIMEnterpriseModeDataBannerStatsItemCellViewModel;
@protocol AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCellDelegate;

@interface AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMEnterpriseModeDataBannerStatsItemCellViewModel *cellViewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) AWEIMEnterpriseModeExpandedDataBannerTagView *statsTag;
@property (weak, nonatomic) id<AWEIMEnterpriseModeExpandedDataBannerViewCollectionViewCellDelegate> delegate;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
