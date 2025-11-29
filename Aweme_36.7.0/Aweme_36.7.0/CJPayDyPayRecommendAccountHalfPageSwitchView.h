@class UIStackView, UIImageView, UILabel, UIView;

@interface CJPayDyPayRecommendAccountHalfPageSwitchView : UIView

@property (retain, nonatomic) UIStackView *titleBgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UIView *recommendBgView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *userDetailView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *mobileLabel;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)a0;

@end
