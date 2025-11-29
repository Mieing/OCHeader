@class UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMEnterTipsVideoTableViewCell : AWEIMSystemMessageTableViewCell

@property (retain, nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> *enterpriseCardView;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)configWithMessage:(id)a0;
- (id)gestureResponseViews;
- (void)p_setCardUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
