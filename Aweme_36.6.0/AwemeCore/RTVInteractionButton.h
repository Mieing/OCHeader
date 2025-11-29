@class UIImageView, NSString;

@interface RTVInteractionButton : UIControl <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned long long controlType;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__layoutComponents;
- (void)__creatComponents;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setAlpha:(double)a0;

@end
