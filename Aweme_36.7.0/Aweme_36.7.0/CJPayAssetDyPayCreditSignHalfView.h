@class UIStackView, UIScrollView, UIView, CJPayBaseLynxView, CJPayDyPaySignOnlyModel, CJPayServiceDetailView, UIImageView, CJPayCommonProtocolView, NSString, CJPayButton, UILabel, CJPayDynamicLayoutView;

@interface CJPayAssetDyPayCreditSignHalfView : UIView <CJPayLynxViewDelegate, CJPayAssetDyPayCreditSignViewProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayDynamicLayoutView *stackView;
@property (retain, nonatomic) UIView *logoImageBgView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) UIStackView *confirmAreaStackView;
@property (retain, nonatomic) CJPayButton *confirmBtn;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayBaseLynxView *voucherBubbleView;
@property (retain, nonatomic) CJPayDyPaySignOnlyModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidRecieveError:(id)a0;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)p_updateUI;
- (void)p_setUpUI;
- (void)p_clickBubble;
- (void)p_updateWithNewModel:(id)a0;
- (void)p_updateContent;
- (BOOL)p_isShowLogo;
- (BOOL)p_isStandardHalfScreen;
- (BOOL)p_isShowTitleLabel;
- (BOOL)p_isShowSubTitleLabel;
- (BOOL)p_isShowSeparateLine;
- (BOOL)p_isShowDetailLabel;
- (BOOL)p_isShowServiceDetailView;
- (id)p_riskFundAmountAttributeStr;
- (id)p_createServiceDetailItemModel;
- (void)p_updateVoucherAndProtocolStyle;
- (void)p_clickConfirmBtn;
- (void)p_clickProtocol;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)updateWithNewModel:(id)a0;

@end
