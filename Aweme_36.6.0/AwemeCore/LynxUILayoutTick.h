@class UIView;
@protocol LUIBodyView;

@interface LynxUILayoutTick : LynxLayoutTick

@property (weak, nonatomic) UIView<LUIBodyView> *root;

- (id)initWithRoot:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)attach:(id)a0;
- (void)requestLayout;

@end
