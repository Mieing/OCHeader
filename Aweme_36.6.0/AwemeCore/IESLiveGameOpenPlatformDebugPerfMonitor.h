@class NSString, HMDANRSDKMonitor, IESLiveGCDTimer;

@interface IESLiveGameOpenPlatformDebugPerfMonitor : NSObject <HMDANRSDKMonitorDelegate>

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) HMDANRSDKMonitor *anrMonitor;
@property (nonatomic) long long previewUpdateCount;
@property (nonatomic) long long testUploadCount;
@property (nonatomic) double stutterDurationPerPeriod;
@property (copy, nonatomic) id /* block */ monitorCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBlockWithDuration:(double)a0;
- (void)_loopAction;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
