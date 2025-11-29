@class MMUILabel, UIView;

@interface BizRecentReadNoMoreDataLabel : UIView

@property (retain, nonatomic) UIView *lineLeftView;
@property (retain, nonatomic) UIView *lineRightView;
@property (retain, nonatomic) MMUILabel *noMoreTipsLabel;

- (id)init;
- (void)layoutSubviews;
- (void)configureLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
