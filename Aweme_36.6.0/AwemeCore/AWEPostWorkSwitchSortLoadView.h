@class UILabel, AWEUILoadingView;

@interface AWEPostWorkSwitchSortLoadView : UIView

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double containerWidth;

+ (struct CGSize { double x0; double x1; })preferedSize;

- (void)startLoadingWithText:(id)a0;
- (void)switchLoadingWithIntensifyStyle:(unsigned long long)a0;
- (double)loadingViewWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })labelTextSize;

@end
