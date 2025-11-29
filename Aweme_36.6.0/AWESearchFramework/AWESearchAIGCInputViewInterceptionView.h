@class UITapGestureRecognizer, NSString, UIPanGestureRecognizer;

@interface AWESearchAIGCInputViewInterceptionView : UIView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) id /* block */ interceptionDetected;
@property (retain, nonatomic) UIPanGestureRecognizer *interceptionPanGesture;
@property (retain, nonatomic) UITapGestureRecognizer *interceptionTapGesture;
@property (nonatomic) BOOL hasTriggeredDetect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeChange;
- (void)panDetected;
- (void)tapDetected;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dealloc;

@end
