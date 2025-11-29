@class CAGradientLayer, UIStackView, AWEDetailShimmerView, UILabel, UIView, AWEDetailNewTrendTagView;

@interface AWEDetailNewTrendTitleCell : UICollectionViewCell

@property (retain, nonatomic) UIView *titleSkeletonView;
@property (retain, nonatomic) UIView *subTitleSkeletonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundGradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *leftSpaceView;
@property (retain, nonatomic) UIView *middleSpaceView;
@property (retain, nonatomic) UIView *rightSpaceView;
@property (retain, nonatomic) AWEDetailNewTrendTagView *tagView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) id /* block */ didSelectTagActionBlock;
@property (retain, nonatomic) AWEDetailShimmerView *shimmerView;

- (void)didEndDisplay;
- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void)clickTagView;
- (void)handleTagIconChange:(id)a0;
- (void)handleRightTagIconChange:(id)a0;
- (void)handleIsSkeletonModeStatus:(BOOL)a0 skeletonTitle:(id)a1;
- (void)handleTagTitleFont:(id)a0;
- (void)handleTagIconUrlsChange:(id)a0;
- (void)handleRightTagIconUrlsChange:(id)a0;
- (void)handleTagColorsChange:(id)a0;
- (void)handleTagTitleChange:(id)a0;
- (void)handleBackgroundColorsChange:(id)a0;
- (void)handleBottomBackgroundColorsChange:(id)a0;
- (void)removeSubtitleView;
- (void)removeRightSpaceView;
- (void)removeRightTagIconView;
- (void)handleDidSelectTagActionBlock:(id /* block */)a0;
- (double)tagTitleWidth:(id)a0;
- (double)subTitleWidth:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)willDisplay;

@end
