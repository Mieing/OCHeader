@protocol AWEIMTouchReportGestureRecognizerDelegate;

@interface AWEIMTouchReportGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<AWEIMTouchReportGestureRecognizerDelegate> touchDelegate;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
