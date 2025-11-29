@class UIImageView, UILabel, UIView, UIButton;

@interface AWEEnterpriseAutoGetPhoneNumberView : UIView

@property (retain, nonatomic) UIButton *allowBtn;
@property (retain, nonatomic) UIButton *denyBtn;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *phoneLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *otherPhoneLabel;
@property (retain, nonatomic) UIImageView *rightArrowImg;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (void)showViewWithPhoneNumber:(id)a0 dismissBlock:(id /* block */)a1;

- (id)initWithPhoneNumber:(id)a0 dismissBlock:(id /* block */)a1;
- (void)p_makeContraints;
- (void)p_configBottomViewCorner;
- (void)tapAllowAction;
- (void)tapDenyAction;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
