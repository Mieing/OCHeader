@protocol IESECWinGuidePopoverRootViewDelegate;

@interface IESECWinGuidePopoverRootView : UIView

@property (retain, nonatomic) id<IESECWinGuidePopoverRootViewDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
