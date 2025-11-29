@class NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEPlayletSkyLightCatchViewDelegate;

@interface AWEPlayletSkyLightCatchView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *topBar;
@property (weak, nonatomic) id<AWEPlayletSkyLightCatchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureAction:(id)a0;
- (void)panGestureAction:(id)a0;
- (void)addTopBar;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
