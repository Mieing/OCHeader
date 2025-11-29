@protocol LongPressMenuViewDelegate;

@interface MMUILongPressMenuView : UIView

@property (weak, nonatomic) id<LongPressMenuViewDelegate> menu_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)LongPressEvents;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)copy:(id)a0;
- (void).cxx_destruct;

@end
