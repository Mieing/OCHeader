@class VEImageDetector, NSTimer, NSString;

@interface AWEImageDetectorProviderImpl : NSObject <AWEImageDetectorProviderProtocol>

@property (retain, nonatomic) VEImageDetector *imageDetector;
@property (nonatomic) long long useCount;
@property (retain, nonatomic) NSTimer *delayReleaseTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseImageDetector;
- (void)p_invalidateDelayReleaseTimerIfNeeded;
- (void)p_releaseImageDetectorIfNeeded;
- (void)provideImageDetectorWithCompletion:(id /* block */)a0;
- (void)tryReleaseImageDetector;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationDidReceiveMemoryWarningNotification:(id)a0;

@end
