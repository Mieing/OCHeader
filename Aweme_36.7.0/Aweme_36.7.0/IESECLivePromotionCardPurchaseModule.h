@class UIStackView, UIView, NSString, UIImageView, UIButton, IESECLiveStackView, IESECLiveGoodsPurchaseModel, IESECLiveGradientView;
@protocol IESECLivePromotionCardBuyViewProtocol;

@interface IESECLivePromotionCardPurchaseModule : IESECLivePromotionCardCommonModule <IESECLivePromotionCardCommonModuleAddCartCenterAbilityProvider>

@property (retain, nonatomic) IESECLiveGoodsPurchaseModel *model;
@property (retain, nonatomic) UIStackView *goodsActionButtonView;
@property (retain, nonatomic) UIView<IESECLivePromotionCardBuyViewProtocol> *buyButton;
@property (retain, nonatomic) IESECLiveGradientView *buyButtonGradientView;
@property (retain, nonatomic) UIButton *addToCartButton;
@property (retain, nonatomic) UIImageView *addToCartButtonIcon;
@property (retain, nonatomic) IESECLiveStackView *purchaseStepper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEvent;
- (BOOL)buttonEnable;
- (id)skinConfig;
- (id)protocolToInject;
- (struct CGPoint { double x0; double x1; })addToCartButtonCenterToView:(id)a0;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)clickBuyButton;
- (id)buyBtnUIConfig;
- (void)setupBuyButtonWithModel:(id)a0;
- (void)setupAddCartButtonWithModel:(id)a0;
- (void)setupPurchaseStepperWithModel:(id)a0;
- (void)clickStepperSubButton;
- (void)clickStepperAddButton;
- (id)actionTrackerForBuyButtonClicked;
- (BOOL)isBuyButtonEnabled;
- (id)actionTrackerForAddCartClicked;
- (void)longPressBuyButton:(id)a0;
- (void)clickAddToCartButton;
- (void)longPressCartButton:(id)a0;
- (void).cxx_destruct;
- (id)view;
- (void)setupAccessibility;
- (id)layoutConfig;

@end
