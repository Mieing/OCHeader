@class NSString, UIImageView, CJPayBDTradeInfo, UILabel;

@interface CJPayRechargeResultMainView : UIView

@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *fundLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) CJPayBDTradeInfo *tradeInfo;
@property (copy, nonatomic) NSString *fund;

- (void)p_makeConstraints;
- (void)updateWithTradeInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
