@class UIStackView, AFDButton, UIImageView, UILabel;
@protocol AWEUserRecommendTableViewModelProtocol, AWEUserRecommendCellModelProtocol;

@interface AWEUserRecommendCollectionViewBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AFDButton *actionButton;
@property (retain, nonatomic) AFDButton *closeButton;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) id<AWEUserRecommendCellModelProtocol> model;
@property (copy, nonatomic) id /* block */ leftScrollBlock;
@property (copy, nonatomic) id /* block */ didInteractBlock;
@property (nonatomic) double avatarWidth;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;

+ (id)reuseIdentifier;

- (void)configWithModel:(id)a0;
- (void)onSelected;
- (void)onModelUpdated;
- (void)p_action;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willDisplay;

@end
