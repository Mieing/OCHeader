@class UIImageView, UILabel, UIView, UIButton;

@interface AWEFindFriendsVerticalFunctionListSectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *line;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
