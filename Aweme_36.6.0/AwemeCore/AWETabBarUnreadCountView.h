@class UILabel;

@interface AWETabBarUnreadCountView : UIView

@property (retain, nonatomic) UILabel *dotLabel;
@property (nonatomic) unsigned long long count;

- (void)updateTextColor:(id)a0;
- (void)updateCount:(unsigned long long)a0;
- (void)_appear;
- (void)updateDotColor:(id)a0;
- (void)_disappear;
- (void)updateFrameWithWidth:(double)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;

@end
