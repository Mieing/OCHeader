@class UIImageView, UILabel;

@interface IESLiveAnnouncementFansGroupTipViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
