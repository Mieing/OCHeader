@class NSObject;
@protocol OS_dispatch_source;

@interface AWEProcessingUnitMonitor : NSObject

@property (nonatomic) unsigned long long processorCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) long long interval;
@property (nonatomic) BOOL enableTrack;
@property (nonatomic) BOOL enableBGTrack;
@property (nonatomic) BOOL enableThreadCPUTrack;
@property (nonatomic) BOOL enableThreadNameTrack;
@property (nonatomic) BOOL enableThreadStateTrack;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double launchCPU;
@property (nonatomic) long long index;

+ (void)start;
+ (id)sharedMonitor;

- (void)onAppEnterBackground;
- (void)onAppDidActive;
- (void)recordProcessingUnitUsage;
- (void).cxx_destruct;
- (id)init;
- (void)startTimerWithInterval:(long long)a0;

@end
