@class UIImageView, UILabel, IESLivePcPadItemD;

@interface IESLivePcPadItemDCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLivePcPadItemD *device;
@property (retain, nonatomic) UIImageView *selectView;
@property (nonatomic) unsigned long long theme;

- (void)updateDevice:(id)a0 theme:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
