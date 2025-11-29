@protocol IESECRelationForwardViewDelegate;

@interface IESECRelationForwardView : UIView

@property (weak, nonatomic) id<IESECRelationForwardViewDelegate> delegate;
@property (nonatomic) BOOL disableForward;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
