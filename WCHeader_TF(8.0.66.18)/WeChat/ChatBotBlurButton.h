@class UIVisualEffectView;

@interface ChatBotBlurButton : MMUIButton

@property (retain, nonatomic) UIVisualEffectView *blurView;

- (id)init;
- (void)layoutSubviews;
- (void)layoutBlurView;
- (void)setupShadow;
- (void)setCornerRadius:(double)a0;
- (void).cxx_destruct;

@end
