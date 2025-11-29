@class MMTimer;
@protocol WCFinderLongPressIntervalGestureRecognizerDelegate;

@interface WCFinderLongPressIntervalGestureRecognizer : UILongPressGestureRecognizer

@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) double timeInterval;
@property (weak, nonatomic) id<WCFinderLongPressIntervalGestureRecognizerDelegate> m_delegate;

- (id)initWithInterval:(double)a0;
- (void)dealloc;
- (void)onLongPressAction:(id)a0;
- (void)triggerIntervalTimerAction;
- (BOOL)gestureIsOver;
- (void).cxx_destruct;

@end
