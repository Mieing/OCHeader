@class UIColor, AWEDetailTrendBgColorAnimationHelperConfig, UIView, UIViewPropertyAnimator;

@interface AWEDetailTrendBgColorAnimationHelper : NSObject

@property (retain, nonatomic) AWEDetailTrendBgColorAnimationHelperConfig *config;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIColor *currentColor;
@property (nonatomic) BOOL firstUpdateFlag;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;

- (void)updateColor:(id)a0 animated:(BOOL)a1 needUpdateFirstUpdateFlag:(BOOL)a2;
- (void)updateColor:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (void)updateColor:(id)a0;

@end
