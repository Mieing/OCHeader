@class TSTouchTrackRecognizer, NSString, TSMotionTracker, UIView;

@interface TSTouchMotionTracker : NSObject <TSTouchMotionEventTracker>

@property (weak, nonatomic) UIView *attachedView;
@property (retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer;
@property (retain, nonatomic) TSMotionTracker *motionTracker;
@property BOOL didBeingOnTouch;
@property (copy) id /* block */ eventHandler;
@property double maximumMotionDuration;
@property double minimiusMotionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterval:(double)a0 view:(id)a1 trackEventHandler:(id /* block */)a2;
- (void)controlOnTouchDown:(id)a0 withEvent:(id)a1;
- (void)controlOnTouchUp:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
