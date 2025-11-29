@class CJPayBytePayMethodView, CJPayDefaultChannelShowConfig, CJPayNotSufficientFundsView, NSArray, CJPayIntegratedCashierProcessManager, CJPayPaddingLabel, NSDictionary, CJPayChannelBizModel, MASConstraint, CJPayCreateOrderResponse, NSString, CJPaySubPayTypeIconTipModel;
@protocol CJChangePayMethodDelegate;

@interface CJPayBizChoosePayMethodViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate>

@property (retain, nonatomic) CJPayNotSufficientFundsView *notSufficientFundsView;
@property (retain, nonatomic) CJPayPaddingLabel *voucherTipLabel;
@property (copy, nonatomic) NSArray *bizModels;
@property (retain, nonatomic) CJPayIntegratedCashierProcessManager *processManager;
@property (retain, nonatomic) MASConstraint *notSufficientViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *payMethodViewTopBaseNotSufficientViewConstraint;
@property (nonatomic) struct CGSize { double width; double height; } notSufficientFunsSize;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) NSDictionary *commonTrackerParams;
@property (retain, nonatomic) CJPayChannelBizModel *currentSelectedBizModel;
@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (weak, nonatomic) id<CJChangePayMethodDelegate> delegate;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *outDefaultConfig;
@property (retain, nonatomic) CJPayCreateOrderResponse *orderResponse;
@property (copy, nonatomic) NSArray *notSufficientFundsIDs;
@property (copy, nonatomic) NSDictionary *channelDisableReason;
@property (copy, nonatomic) NSString *creditPayInstallment;
@property (nonatomic) BOOL showNotSufficientFundsHeaderLabel;
@property (nonatomic) BOOL isShowDetentionAlert;
@property (retain, nonatomic) CJPaySubPayTypeIconTipModel *iconTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (id)p_payMethodInfoTrackList;
- (void)notifyNotsufficient:(id)a0;
- (void)p_updateWithResponse:(id)a0;
- (void)p_unionBindCardUnavailable;
- (id)p_buildPayMethodModels;
- (void)p_updatePayMethodView;
- (void)p_tracker;
- (void)p_modifyResponseModelSelectIndexTo:(long long)a0;
- (void)p_reloadCurrentView;
- (BOOL)p_isHaveDiscount;
- (id)p_getShouldShowConfigs;
- (id)p_subPayInfoTrackerWithShowConfig:(id)a0 index:(unsigned long long)a1;
- (void)didChangeCreditPayInstallment:(id)a0;
- (id)initWithOrderResponse:(id)a0 defaultConfig:(id)a1 processManager:(id)a2;
- (void)updateNotSufficientFundsViewTitle:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)back;

@end
