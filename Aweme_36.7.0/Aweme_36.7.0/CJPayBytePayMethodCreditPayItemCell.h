@class UILabel, CJPayBytePayCreditPayMethodModel, UIView;

@interface CJPayBytePayMethodCreditPayItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *iconLabel;
@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) CJPayBytePayCreditPayMethodModel *model;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
