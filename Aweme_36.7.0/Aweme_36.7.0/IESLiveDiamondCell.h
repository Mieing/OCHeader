@class UILabel, UIView;

@interface IESLiveDiamondCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UILabel *diamondLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *tipContainer;
@property (nonatomic) BOOL isCustomCell;

+ (struct CGSize { double x0; double x1; })sizeOfCell;

- (void)updateCustomModel;
- (void)updateWithModel:(id)a0 shouldShowCouponDescribe:(BOOL)a1 describeString:(id)a2;
- (id)p_diamondFromModel:(id)a0;
- (id)p_priceFromModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
