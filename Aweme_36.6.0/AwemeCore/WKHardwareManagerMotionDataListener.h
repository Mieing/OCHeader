@class NSString;

@interface WKHardwareManagerMotionDataListener : NSObject <WKKryptonMotionDataListener> {
    struct weak_ptr<lynx::wkcanvas::HardwareManager> { struct HardwareManager *__ptr_; struct __shared_weak_count *__cntrl_; } _weakManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUpdateRotationRateX:(double)a0 y:(double)a1 z:(double)a2;
- (void)onUpdateAttitudeRoll:(double)a0 pitch:(double)a1 yaw:(double)a2;
- (id)initWithHardwareManager:(struct weak_ptr<lynx::wkcanvas::HardwareManager> { struct HardwareManager *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
