@interface FakeScreenOffWindow : MMUIWindow

@property (nonatomic) double originBrightness;

+ (id)window;
+ (void)show:(BOOL)a0;
+ (void)hide:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onWindowSceneSizeChanged;

@end
