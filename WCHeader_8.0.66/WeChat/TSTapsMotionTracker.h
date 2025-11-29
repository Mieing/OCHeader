@class TSTouchTrackRecognizer, NSMutableArray, NSString, TSMotionTracker, UIView, NSObject;
@protocol OS_dispatch_source;

@interface TSTapsMotionTracker : NSObject <TSTouchMotionEventTracker>

@property (weak, nonatomic) UIView *attachedView;
@property (retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer;
@property (retain, nonatomic) TSMotionTracker *motionTracker;
@property (retain) NSObject<OS_dispatch_source> *motionTrackerTimer;
@property (copy, nonatomic) id /* block */ eventHandler;
@property double intervalForMotionTracker;
@property (retain, nonatomic) NSMutableArray *touches;
@property double motionMonitoringDuration;
@property double motionMonitoryingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterval:(double)a0 view:(id)a1 trackEventHandler:(id /* block */)a2;
- (void)dealloc;
- (void)startMonitoringMotions;
- (void)scheduleMonitoringMotionsOnPress;
- (void)stopMonitoringMotions;
- (void)scheduleDelayedStoppingMonitoring;
- (void)fireMotionMonitoringWithTouch:(id)a0;
- (void).cxx_destruct;

@end
