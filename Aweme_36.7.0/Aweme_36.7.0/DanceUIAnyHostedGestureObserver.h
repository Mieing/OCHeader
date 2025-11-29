@protocol UIGestureRecognizerDelegate;

@interface DanceUIAnyHostedGestureObserver : UIGestureRecognizer {
    void /* unknown type, empty encoding */ phases;
    void /* unknown type, empty encoding */ activeCount;
    void /* unknown type, empty encoding */ proxiedDelegate;
    void /* unknown type, empty encoding */ waitingForReset;
}

@property (nonatomic, retain) id<UIGestureRecognizerDelegate> delegate;

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
