@class UIView;
@protocol LUIBodyView;

@interface LynxUILayoutTick : LynxLayoutTick

@property (weak, nonatomic) UIView<LUIBodyView> *root;

- (void)requestLayout:(id /* block */)a0;
- (id)initWithRoot:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)attach:(id)a0;
- (void)requestLayout;

@end
