@class UIImageView, UILabel, UIView, MASConstraint;

@interface CJPayPayAgainNewCardCommonView : UIView

@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UIImageView *thirdImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *discountContentView;
@property (retain, nonatomic) UILabel *discountLabel;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MASConstraint *selfLeftBaseFirstImageViewLeftConstraint;
@property (retain, nonatomic) MASConstraint *selfLeftBaseDiscountLeftConstraint;

- (void)p_addCornerBackgroundViewToView:(id)a0;
- (void)refreshWithHintInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
