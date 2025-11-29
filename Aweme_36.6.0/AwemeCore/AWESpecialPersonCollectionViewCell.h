@class UILabel, UIImageView, UIButton;

@interface AWESpecialPersonCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verifyBadgeView;
@property (retain, nonatomic) UIButton *addButton;
@property (copy, nonatomic) id /* block */ addBtnClickBlock;

+ (id)identifier;

- (void)updateWithModel:(id)a0 addBtnClickBlock:(id /* block */)a1;
- (void)addBtnClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
