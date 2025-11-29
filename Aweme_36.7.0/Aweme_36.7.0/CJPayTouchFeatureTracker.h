@class CJPayClickTracker;

@interface CJPayTouchFeatureTracker : NSObject

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) CJPayClickTracker *clickTracker;

+ (id)sharedInstance;

- (void)receiveHitTestWithTargetView:(id)a0 fromView:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 event:(id)a3;
- (id)getAllClickEventListTrackData;
- (void)p_setupViewTouchMonitor;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
