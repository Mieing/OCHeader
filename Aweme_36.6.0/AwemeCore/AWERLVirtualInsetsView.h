@class AWERLVirtualView;

@interface AWERLVirtualInsetsView : AWERLVirtualView

@property (readonly, nonatomic) AWERLVirtualView *subview;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 subview:(id)a1;
- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canRenderView;

@end
