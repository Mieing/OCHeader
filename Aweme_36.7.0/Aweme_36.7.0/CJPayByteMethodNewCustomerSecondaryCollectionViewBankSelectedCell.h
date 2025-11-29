@class UIImageView, CJPayPaddingLabel, UILabel, UIView;

@interface CJPayByteMethodNewCustomerSecondaryCollectionViewBankSelectedCell : UICollectionViewCell

@property (retain, nonatomic) UIView *canvasView;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayPaddingLabel *marketingLabel;

- (void)addDotToCanvasView:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)loadData:(id)a0;

@end
