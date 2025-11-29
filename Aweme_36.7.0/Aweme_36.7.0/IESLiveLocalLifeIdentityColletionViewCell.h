@class UIImageView, UILabel, UIView, IESLiveAnchorLocalLifeConfigInfoModel;

@interface IESLiveLocalLifeIdentityColletionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *imageBackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLiveAnchorLocalLifeConfigInfoModel *model;

- (void)bindModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
