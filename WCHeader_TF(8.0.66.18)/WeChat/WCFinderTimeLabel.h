@class UILabel;

@interface WCFinderTimeLabel : MMUIView

@property (retain, nonatomic) UILabel *currentTimeLabel;
@property (retain, nonatomic) UILabel *splitLabel;
@property (retain, nonatomic) UILabel *totalTimeLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupSubViews;
- (id)genLabel;
- (void)updateTotalTime:(double)a0;
- (void)updateCurTime:(double)a0;
- (void)layoutView;
- (void).cxx_destruct;

@end
