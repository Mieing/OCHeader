@class UIImageView, AWEIMNewcomerWelcomerModel, UILabel;

@interface AWEIMNewcomerReportWelcomeListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMNewcomerWelcomerModel *model;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *ownerLable;

+ (id)identifier;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)__setupUI;
- (void)__handleTapavatarView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
