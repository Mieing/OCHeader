@class TSTouchTrackRecognizer, NSString, UIView, TSMotionTracker;

@interface TSInputTracker : NSObject <TSTouchMotionEventTracker>

@property (retain, nonatomic) TSMotionTracker *motionTracker;
@property (weak, nonatomic) UIView *attachedView;
@property (retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)findKeyboardWindow;
- (id)findViewInView:(id)a0 ofClass:(Class)a1;
- (id)findUIKBKeyplaneViewInView:(id)a0;
- (id)findUIInputSetHostViewInView:(id)a0;
- (id)initWithInterval:(double)a0 view:(id)a1 trackEventHandler:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
