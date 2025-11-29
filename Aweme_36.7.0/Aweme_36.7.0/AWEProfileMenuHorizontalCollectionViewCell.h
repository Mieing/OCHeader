@class UIImageView, UILabel, UIView;

@interface AWEProfileMenuHorizontalCollectionViewCell : UICollectionViewCell

@property (nonatomic) unsigned long long modelShapeType;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *bgView;
@property (readonly, nonatomic) unsigned long long type;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
