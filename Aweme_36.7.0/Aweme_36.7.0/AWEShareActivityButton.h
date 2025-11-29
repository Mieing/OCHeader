@class UIView, CAShapeLayer;

@interface AWEShareActivityButton : AWEUIButton

@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) UIView *loadingView;

+ (id)buttonWithType:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
