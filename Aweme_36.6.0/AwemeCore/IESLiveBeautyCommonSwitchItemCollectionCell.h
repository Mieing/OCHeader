@class UILabel, UIImageView, UIView;

@interface IESLiveBeautyCommonSwitchItemCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) UIView *switchIconView;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) UIImageView *iconImageView;

- (void)updateCellWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
