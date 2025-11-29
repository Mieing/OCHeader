@class UILabel, UIView;

@interface CJPayOutRetainVoucherSingleView : UIView

@property (retain, nonatomic) UIView *voucherBgView;
@property (retain, nonatomic) UILabel *voucherWorthLabel;

- (void)updateWithMsgModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
