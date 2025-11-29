@class MMUILabel, UIView;

@interface BizRecentReadTipsBar : UIView

@property (retain, nonatomic) MMUILabel *dateLabel;
@property (retain, nonatomic) UIView *bottomLine;

- (id)init;
- (void)configureLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)updateDateText:(id)a0;
- (void).cxx_destruct;

@end
