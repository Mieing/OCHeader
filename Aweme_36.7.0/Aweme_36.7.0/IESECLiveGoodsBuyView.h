@class UIColor, NSString, UILabel, UIButton;

@interface IESECLiveGoodsBuyView : UIView <IESECLivePromotionCardBuyViewProtocol>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesec_applyRadius:(double)a0 atCorners:(unsigned long long)a1;
- (id)getBackgroundColor;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setupUI;

@end
