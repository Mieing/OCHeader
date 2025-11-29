@class CAGradientLayer, NSString, LOTAnimationView, UILabel;

@interface AWESearchHybridRefreshTipsView : UIView

@property (retain, nonatomic) LOTAnimationView *whirlView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientBorder;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long status;

- (void)themeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)updateUI;

@end
