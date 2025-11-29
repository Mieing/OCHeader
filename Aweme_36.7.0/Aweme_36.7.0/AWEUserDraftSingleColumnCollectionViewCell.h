@class UIImageView, UILabel, UIView;

@interface AWEUserDraftSingleColumnCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *maskBackgroundView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *aiDraftStateView;
@property (retain, nonatomic) UILabel *aiDraftTextLabel;
@property (retain, nonatomic) UIImageView *aiDraftIcon;

+ (id)identifier;

- (void)updateAIDraftViewWithContent:(id)a0;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
