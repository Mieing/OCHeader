@class CAGradientLayer, IESECSKUBottomButtonModel, CALayer, UILabel;

@interface IESECSKUBottomButton : IESECHighlightButton

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) UILabel *textWithIconLabel;
@property (retain, nonatomic) IESECSKUBottomButtonModel *buttonModel;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
