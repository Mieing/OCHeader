@protocol AppleViewDelegate;

@interface EaglView : UIView

@property (retain, nonatomic) id<AppleViewDelegate> delegate;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onResize:(double)a0;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
