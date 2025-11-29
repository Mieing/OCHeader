@class UILabel, UIView;

@interface CJPayBubbleInfoView : UIView

@property (retain, nonatomic) UILabel *voucherInfo;
@property (retain, nonatomic) UIView *bgView;

- (void)p_refreshUI;
- (void)switchPayMethodVoucherInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
