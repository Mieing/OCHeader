@class AWEIMCollapsibleBannerViewModel, UIImageView, UILabel, UIView, UIButton;
@protocol AWEIMCollapsibleBannerCollectionViewCellDelegate;

@interface AWEIMCollapsibleBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerContentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIButton *removeBtn;
@property (retain, nonatomic) UIView *removeBtnMaskView;
@property (nonatomic) long long tailType;
@property (retain, nonatomic) AWEIMCollapsibleBannerViewModel *viewModel;
@property (weak, nonatomic) id<AWEIMCollapsibleBannerCollectionViewCellDelegate> delegate;

- (void)__updateTailType:(long long)a0;
- (void)__updateShadowLayer;
- (void)__didTapRemove;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
