@class UILabel;

@interface WCFinderPanMaskView : MMUIView

@property (retain, nonatomic) UILabel *currTimeLabel;
@property (retain, nonatomic) UILabel *speLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupLayout;
- (id)createLabel;
- (void)updateWithCurStr:(id)a0 totalStr:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
