@class UIImageView, UILabel, UIStackView;

@interface CJPayDyPayRecommendAccountHalfPageLoginView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIStackView *titleBgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)a0;

@end
