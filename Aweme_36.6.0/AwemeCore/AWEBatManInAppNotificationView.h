@class NSTimer;

@interface AWEBatManInAppNotificationView : DUXInAppNotificationView

@property (retain, nonatomic) NSTimer *dismissTimer;

- (void)showOnView:(id)a0;
- (void)animateWithBezierPointOne:(float)a0 pointTwo:(float)a1 pointThree:(float)a2 pointFour:(float)a3 andDuration:(double)a4 andAnimations:(id /* block */)a5 andCompletion:(id /* block */)a6;
- (void)startDismissTimer;
- (void)timerDismiss:(id)a0;
- (void).cxx_destruct;

@end
