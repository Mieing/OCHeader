@class MMSnackBarView;
@protocol MMSnackBarWindowViewDelegate;

@interface MMSnackBarWindowView : UIView

@property (retain, nonatomic) MMSnackBarView *snackBarView;
@property (weak, nonatomic) id<MMSnackBarWindowViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateSnackBarPosition;
- (void).cxx_destruct;

@end
