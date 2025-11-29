@protocol IESECShopForwardViewDelegate;

@interface IESECShopForwardView : UIView

@property (weak, nonatomic) id<IESECShopForwardViewDelegate> delegate;
@property (nonatomic) BOOL disableForward;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
