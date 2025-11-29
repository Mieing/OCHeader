@class CAGradientLayer, NSString, LOTAnimationView, UILabel, UIButton;

@interface AWESearchHybridSearchTipsView : UIView

@property (retain, nonatomic) LOTAnimationView *whirlView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) CAGradientLayer *gradientBorder;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)closeButtonClick;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
