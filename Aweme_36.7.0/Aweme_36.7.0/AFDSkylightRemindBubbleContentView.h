@class UILabel;

@interface AFDSkylightRemindBubbleContentView : AFDReusableBubbleContentView

@property (retain, nonatomic) UILabel *textLabel;

+ (struct CGSize { double x0; double x1; })viewSize;

- (void)onAWEUIThemeChangeNotification;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
