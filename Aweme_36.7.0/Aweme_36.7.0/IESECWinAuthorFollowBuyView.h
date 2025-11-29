@class CAGradientLayer, IESECWinAuthorObject, UIImage, UILabel, UIView, IESECGCDTimer;

@interface IESECWinAuthorFollowBuyView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *followBuyLabel;
@property (retain, nonatomic) UIView *vLineView;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) UIImage *gradientImage;
@property (retain, nonatomic) IESECWinAuthorObject *object;

- (void)trackShow;
- (void)generateGradientLayer;
- (void)updateDataWithObject:(id)a0;
- (id)followAttributedText:(id)a0;
- (id)recommendAttributedText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
