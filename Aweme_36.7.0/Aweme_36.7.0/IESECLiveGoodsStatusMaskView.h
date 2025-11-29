@class UILabel, UIView;

@interface IESECLiveGoodsStatusMaskView : UIView

@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;

- (void)setLeftAndRightLabelHidden:(BOOL)a0;
- (void)setStatusStringFont:(id)a0;
- (void)setCornerRadius:(double)a0 atCorners:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStatusString:(id)a0;
- (void)setupUI;

@end
