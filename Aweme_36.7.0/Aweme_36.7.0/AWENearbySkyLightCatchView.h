@class NSString, UIPanGestureRecognizer;
@protocol AWENearbySkyLightCatchViewDelegate;

@interface AWENearbySkyLightCatchView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<AWENearbySkyLightCatchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panGestureAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
