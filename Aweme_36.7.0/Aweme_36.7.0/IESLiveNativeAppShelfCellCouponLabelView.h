@class UILabel, CAShapeLayer, ProductLabelInfo;

@interface IESLiveNativeAppShelfCellCouponLabelView : UIView

@property (retain, nonatomic) ProductLabelInfo *labelInfo;
@property (weak, nonatomic) UILabel *leftLabel;
@property (weak, nonatomic) UILabel *rightLabel;
@property (weak, nonatomic) CAShapeLayer *dashline;

- (id)initWithProductLabelInfo:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
