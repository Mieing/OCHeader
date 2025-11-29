@class NSArray, NSString, CJPayDynamicLayoutView, CJPayDyPaySignOnlyBackwardModel;

@interface CJPayDyPaySignOnlyBackwardVoucherView : UIView <CJPayDynamicLayoutViewDelegate>

@property (retain, nonatomic) CJPayDynamicLayoutView *voucherShowView;
@property (copy, nonatomic) NSArray *dynamicViewList;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraints;
- (void)hideAllVouchersTime;
- (void)updateCountDownVoucherTag:(id)a0 voucherCanUse:(BOOL)a1;
- (void)p_createVoucherViewList;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
