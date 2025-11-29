@class CJPayDyPayHPVoucherTagContainerView, CJPayBDCreateOrderResponse, UILabel, CJPayDefaultChannelShowConfig, CJPayStandardAmountView;

@interface CJPayDyPayQualityHPHeaderView : UIView

@property (retain, nonatomic) UILabel *merchantTitleLabel;
@property (retain, nonatomic) CJPayStandardAmountView *scrollAmountLabel;
@property (retain, nonatomic) UILabel *amountUnitLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *originAmountLabel;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (nonatomic) BOOL hasRetain;
@property (nonatomic) BOOL usePlusXData;
@property (nonatomic) BOOL hasChoiceChanged;
@property (retain, nonatomic) CJPayDyPayHPVoucherTagContainerView *voucherTagContainerView;

- (void)updateWithCreateOrderResponse:(id)a0 defaultConfig:(id)a1;
- (id)getActivityTitle:(id)a0;
- (id)getAmountText;
- (void)updateWithCreateOrderResponse:(id)a0 defaultConfig:(id)a1 hasRetain:(BOOL)a2 usePlusXData:(BOOL)a3 hasChoiceChanged:(BOOL)a4;
- (void)p_remakeVoucherTagContainerView:(id)a0;
- (void)p_assetUpdateWithResponse:(id)a0 defaultConfig:(id)a1;
- (id)getTradeAmountStrWithResponse:(id)a0;
- (void)p_updateHeaderViewWithTitle:(id)a0 amountStr:(id)a1 crossPrice:(id)a2;
- (void)p_updateOriginAmountWith:(id)a0;
- (id)getVoucherDescText;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
