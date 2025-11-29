@interface iConsoleWindow : MMMainSceneWindow

@property (nonatomic) BOOL haveFirstTouch;
@property (nonatomic) BOOL shouldLogHitTest;
@property (nonatomic) int logHitTestCount;

+ (void)initialize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)createWindow;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)a0;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)becomeKeyWindow;
- (void)setRootViewController:(id)a0;
- (BOOL)accessibilityElementsHidden;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)lookin_shouldCaptureImage;

@end
