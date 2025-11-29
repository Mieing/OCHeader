@class UILabel;

@interface MMFinderLiveAnchorFlashSaleCountDownView : UIView

@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UILabel *tipsLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)startCountDownFrom:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateWithSecond:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
