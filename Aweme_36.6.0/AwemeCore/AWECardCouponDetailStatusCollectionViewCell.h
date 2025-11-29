@class AWECouponDetailModel, UIImageView, AWEButton, UILabel, UIView, UIButton;

@interface AWECardCouponDetailStatusCollectionViewCell : AWECardCouponCollectionViewCell

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *couponCodeLabel;
@property (retain, nonatomic) UILabel *codeLabel;
@property (retain, nonatomic) UIImageView *codeCopyImageView;
@property (retain, nonatomic) UIButton *codeCopyButton;
@property (retain, nonatomic) UILabel *otherLabel;
@property (retain, nonatomic) UIImageView *QRCodeImageView;
@property (retain, nonatomic) UIImageView *barCodeImageView;
@property (retain, nonatomic) AWEButton *useCouponButton;
@property (retain, nonatomic) AWECouponDetailModel *model;

- (void)copyCode;
- (void)updateCouponViewLayout;
- (id)insertSpaceEveryFourDigitsForString:(id)a0;
- (void)useCouponButtonTapped;
- (void)markAsRedeemed;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;
- (void)hideSeparator;

@end
