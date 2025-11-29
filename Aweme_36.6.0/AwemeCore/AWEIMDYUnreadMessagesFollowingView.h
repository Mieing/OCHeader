@class YYLabel, CAGradientLayer, UIView;
@protocol IESIMGradientViewProtocol;

@interface AWEIMDYUnreadMessagesFollowingView : UIView

@property (retain, nonatomic) YYLabel *middleText;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *leftGradientLine;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *rightGradientLine;

- (void)setupUnreadLineUINew;
- (void)setupUnreadLineUI:(BOOL)a0;
- (id)p_makeCommonUnreadLine;
- (void)configMiddleTextWithModel:(id)a0 context:(id)a1 tapMuteHintBlock:(id /* block */)a2;
- (void)configWithModel:(id)a0 context:(id)a1 tapMuteHintBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)nextResponder;
- (id)init;

@end
