@class UIImageView, NSString;

@interface AWESearchFeedbackView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) NSString *url;

- (void)themeDidChange:(id)a0;
- (void)configWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
