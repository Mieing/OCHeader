@interface WCStoryTouchToDismissView : UIView

@property (nonatomic) BOOL touchToDismiss;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) id /* block */ hitTestBlock;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dismissSelf;
- (void).cxx_destruct;

@end
