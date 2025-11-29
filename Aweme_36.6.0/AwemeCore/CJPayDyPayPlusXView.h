@class UIStackView, CJPayDyPayPlusXBodyView, CJPayDyPayPlusXViewModel, CJPayDyPayPlusXHeaderView;

@interface CJPayDyPayPlusXView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) CJPayDyPayPlusXHeaderView *headerView;
@property (retain, nonatomic) CJPayDyPayPlusXBodyView *bodyView;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;
@property (nonatomic) BOOL isQuality;

- (BOOL)isUsePlusXDiscountData;
- (id)getPlusXRetainExtraData;
- (unsigned long long)getPlusXType;
- (id)getPlusXTrackerCommonParams;
- (id)initWithIsQuality:(BOOL)a0;
- (id)getBindCardInfoParams;
- (void)p_hideBodyView:(BOOL)a0;
- (id)getDouPayProcessExtParams;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithViewModel:(id)a0;

@end
