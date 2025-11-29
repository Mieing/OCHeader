@class FlexActivity_RegisteredUser, UIImageView, UILabel, UIButton;

@interface IESLivePKFlexActivityRegisterAnchorCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *friendTag;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) FlexActivity_RegisteredUser *registeredUser;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)updateWithUser:(id)a0;

@end
