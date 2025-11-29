@class UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMGoodsListMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> *enterpriseCardView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)menuTargetView;
- (void)p_setCardUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;

@end
