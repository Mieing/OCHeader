@interface AFDNewSchoolStoryFeedCellActionButton : UIButton

@property (nonatomic) BOOL needImageAnimation;
@property (nonatomic) BOOL needWholeAnimation;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;
@property (copy, nonatomic) id /* block */ didBecomeVoiceOverFocused;

- (void)onTouchUpInside;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;

@end
