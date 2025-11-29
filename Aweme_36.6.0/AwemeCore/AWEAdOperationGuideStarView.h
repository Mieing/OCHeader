@class UIView;

@interface AWEAdOperationGuideStarView : UIView <AWEAdOperationGuideStarView>

@property (retain, nonatomic) UIView *foregroundStarView;
@property (retain, nonatomic) UIView *backgroundStarView;
@property (nonatomic) double currentScore;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) BOOL showWithAnimation;

- (id)createStarViewWithImage:(id)a0;
- (void)updateForgroundStarView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
