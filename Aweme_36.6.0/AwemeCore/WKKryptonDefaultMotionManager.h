@class NSString, CMMotionManager;
@protocol WKKryptonMotionManagerInvoker;

@interface WKKryptonDefaultMotionManager : NSObject <WKKryptonMotionManager> {
    CMMotionManager *_motionManager;
    id<WKKryptonMotionManagerInvoker> _invoker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMotionUpdateInterval:(double)a0;
- (void)startMotionUpdatesWithListener:(id)a0;
- (id)initWithInvoker:(id)a0;
- (void).cxx_destruct;
- (void)stopMotionUpdates;

@end
