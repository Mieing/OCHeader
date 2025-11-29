@class AWEFollowListRecommendCardModel, DUXButton, UIImageView, AWEAliasEditLabel, UIView, UILabel, UIButton;
@protocol AWEFollowListRecommendCardSingleCellDelegate;

@interface AWEFollowListRecommendCardSingleCell : UICollectionViewCell

@property (retain, nonatomic) AWEFollowListRecommendCardModel *model;
@property (retain, nonatomic) UIView *blurBackgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) AWEAliasEditLabel *nickNameLabel;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (nonatomic) double closeButtonWidth;
@property (nonatomic) double avatarViewWidth;
@property (nonatomic) double verificationIconWidth;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (weak, nonatomic) id<AWEFollowListRecommendCardSingleCellDelegate> singleCellDelegate;

- (void)configWithModel:(id)a0;
- (void)closeButtonClicked:(id)a0;
- (void)setupViewSize;
- (void)constructConstraints;
- (void)createEditAliasView;
- (void)followButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
