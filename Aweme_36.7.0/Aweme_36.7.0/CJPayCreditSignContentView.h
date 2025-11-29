@class UIImageView, CJPayDyPaySignOnlyHeaderView, CJPayMultifunctionalAttributeLabel, CJPayAfterPayVoucherView, CJPayButton, CJPayCommonProtocolView, CJPayDyPaySignOnlyModel, CJPayDyPayRecommendAccountView, CJPaySignDeductMethodView, UIView, UIScrollView, CJPayAccountInsuranceTipView, NSString, CJPayServiceDetailView, UIStackView, CJPayBaseLynxView;

@interface CJPayCreditSignContentView : UIView <CJPayLynxViewDelegate, CJPayAssetDyPayCreditSignViewProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayDyPaySignOnlyHeaderView *headerView;
@property (retain, nonatomic) UIView *defaultStyleBodyView;
@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) UIStackView *contentBottomStackView;
@property (retain, nonatomic) CJPayDyPayRecommendAccountView *recommendAccountView;
@property (retain, nonatomic) CJPaySignDeductMethodView *deductMethodView;
@property (retain, nonatomic) CJPayBaseLynxView *voucherContentView;
@property (retain, nonatomic) UIView *serviceImageStyleBodyView;
@property (retain, nonatomic) UIImageView *serviceImageView;
@property (retain, nonatomic) UIView *simpleServiceStyleBodyView;
@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *simpleServiceLabel;
@property (retain, nonatomic) UIStackView *confirmAreaStackView;
@property (retain, nonatomic) CJPayAfterPayVoucherView *bubbleView;
@property (retain, nonatomic) CJPayButton *confirmBtn;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayBaseLynxView *voucherBubbleView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayDyPaySignOnlyModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidRecieveError:(id)a0;
- (void)viewDidFinishLoadWithError:(id)a0;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)p_setupConstraints;
- (void)p_clickBubble;
- (id)p_createServiceDetailItemModel;
- (void)p_updateVoucherAndProtocolStyle;
- (void)p_clickConfirmBtn;
- (void)p_clickProtocol;
- (void)updateWithDeductMethodModel:(id)a0;
- (id)getChangeAccountTrackerParams;
- (void)p_removeAllBodyView;
- (id)p_createSimpleServiceLabelItemModels;
- (id)p_createMerchantItemModel;
- (id)p_createMaskMessageShowModel;
- (id)p_createServiceNameItemModel;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithNewModel:(id)a0;

@end
