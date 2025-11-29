@protocol MMMenuWindowDelegate;

@interface MMMenuWindow : MMUIWindow

@property (weak, nonatomic) id<MMMenuWindowDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuFrame;
@property (nonatomic) BOOL blockBackgroundTouches;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
