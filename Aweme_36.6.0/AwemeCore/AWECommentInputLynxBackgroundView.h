@interface AWECommentInputLynxBackgroundView : UIView

@property (copy, nonatomic) id /* block */ lynxViewDidMoveToSuperView;
@property (copy, nonatomic) id /* block */ lynxViewDidRemoveFromSuperView;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
