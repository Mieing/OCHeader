@class UIImageView, UILabel, IESLiveWalletGradientView;

@interface IESLiveWalletNormalCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveWalletGradientView *tipContainer;
@property (retain, nonatomic) UILabel *tipLabel;

+ (struct CGSize { double x0; double x1; })sizeOfCell;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
