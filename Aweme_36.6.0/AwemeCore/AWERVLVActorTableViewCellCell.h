@class UILabel, BDImageView;

@interface AWERVLVActorTableViewCellCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *avatarImg;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *roleLabel;

- (void)updateWithActorModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
