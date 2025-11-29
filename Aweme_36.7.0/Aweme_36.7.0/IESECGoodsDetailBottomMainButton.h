@class UIStackView, NSString, UILabel, IESECBottomButtonElement, CALayer;

@interface IESECGoodsDetailBottomMainButton : IESECBackgroundView <IESECGoodsDetailViewUpdateMessage, UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESECBottomButtonElement *bottomButtonModel;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) CALayer *maskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (void)longPressGestureAction:(id)a0;
- (void)goodsDetailActivityDidUpdateCountdown:(id)a0 goodsDetailUID:(id)a1;
- (BOOL)isValidTextWithIconElement:(id)a0;
- (void)setupAccessibilityWithBottomButtonModel:(id)a0;
- (void)handleButtonAction;
- (void)configButtonWithBottomButtonModel:(id)a0 pageIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
