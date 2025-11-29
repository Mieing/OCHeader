@class WAMainFrameTaskbarOperationViewController, UIView;

@interface WAMainFrameTaskBarDeleteActionWindow : MMUIWindow

@property (retain, nonatomic) WAMainFrameTaskbarOperationViewController *operationVC;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;

- (id)init;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)makeKeyWindow;
- (void).cxx_destruct;

@end
