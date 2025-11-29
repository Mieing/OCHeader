@class AWEGPUDegradeMetal, NSObject;
@protocol OS_dispatch_source;

@interface AWEPowerDegradeExpManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) AWEGPUDegradeMetal *GPUMetal;

+ (id)sharedManager;

- (void)startTimerIfNeeded:(long long)a0;
- (void)onThermalStateChange:(id)a0;
- (void)setCPUParameter:(double)a0;
- (void)setGPUParameter:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
