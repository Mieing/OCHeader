@class IESLiveLayoutContainerItem;

@interface IESLiveLayoutContainerView : UIView

@property (weak, nonatomic) IESLiveLayoutContainerItem *item;
@property (copy, nonatomic) id /* block */ willRemoveFromSuperView;

- (void).cxx_destruct;
- (id)description;
- (void)willRemoveSubview:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
