@class UILabel;

@interface AFDSkylightAudioBubbleContentView : AFDReusableBubbleContentView

@property (retain, nonatomic) UILabel *timeLabel;

+ (id)stringWithSeconds:(long long)a0;
+ (struct CGSize { double x0; double x1; })viewSizeWithSeconds:(long long)a0;

- (void)onAWEUIThemeChangeNotification;
- (void)updateWithSeconds:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateTextColor;

@end
