@class CJPayAfterPayVoucherView, CJPayDyPaySignOnlyHeaderView, CJPayCommonProtocolView, CJPayDyPaySignOnlyModel, CJPayDyPayRecommendAccountView, CJPaySignDeductMethodView, UIView, CJPayAfterPayNewVoucherView, CJPayStandardButton, CJPayAccountInsuranceTipView, CJPayServiceDetailView, UIScrollView, UIStackView, NSTimer, NSString, CJPayBaseLynxView;

@interface CJPayDyPaySignOnlyView : UIView <CJPayLynxViewDelegate>

@property (retain, nonatomic) CJPayDyPaySignOnlyHeaderView *headerView;
@property (retain, nonatomic) UIView *serviceDetailBgView;
@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) UIStackView *contentBottomBgView;
@property (retain, nonatomic) CJPayDyPayRecommendAccountView *recommendAccountView;
@property (retain, nonatomic) CJPaySignDeductMethodView *deductMethodView;
@property (retain, nonatomic) UIView *detailBgView;
@property (retain, nonatomic) UIScrollView *detailScrollView;
@property (retain, nonatomic) UIStackView *bottomView;
@property (retain, nonatomic) UIView *bubbleBgView;
@property (retain, nonatomic) CJPayAfterPayVoucherView *bubbleView;
@property (retain, nonatomic) CJPayAfterPayNewVoucherView *newBubbleView;
@property (retain, nonatomic) CJPayBaseLynxView *voucherBubbleView;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayDyPaySignOnlyModel *model;
@property (retain, nonatomic) NSTimer *closeTimer;
@property (nonatomic) BOOL haveShowError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)p_setupConstraints;
- (void)p_clickBubble;
- (id)p_createServiceDetailItemModel;
- (void)p_clickConfirmBtn;
- (void)p_clickProtocol;
- (void)updateWithDeductMethodModel:(id)a0;
- (id)getChangeAccountTrackerParams;
- (id)p_buildProtocolTextModels;
- (id)p_buildPauseMarkTextModel;
- (id)p_createMerchantItemModel;
- (id)p_createServiceNameItemModel;
- (long long)p_getBubbleVoucherStyle;
- (void)p_updateBubbleWithVoucherStyle:(long long)a0;
- (void)p_handleCustomizedUI;
- (BOOL)p_needShowProtocol;
- (BOOL)p_needShowProtocolFooterView;
- (id)p_getLynxVoucherBubbleDataStr;
- (void)p_delayDowngradeBubbleVoucherStyle;
- (void)p_bubbleDowngradeNativeVoucherStyle;
- (void)p_updateDeductMethodWithMemPayTypeItem:(id)a0;
- (id)p_buildDeductOrderDescItems:(id)a0;
- (BOOL)p_isServiceDetailUseSimpleStyle;
- (id)p_createSimpleServiceDescItemModel;
- (BOOL)p_needShowProtocolBodyView;
- (void)p_openProtocolWithGroupId:(id)a0;
- (void)p_cancelDowngradeBubbleVoucherStyle;
- (void)updateDeductMethodWithShowConfig:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithNewModel:(id)a0;

@end
