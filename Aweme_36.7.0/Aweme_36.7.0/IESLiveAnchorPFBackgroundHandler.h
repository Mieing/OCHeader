@class IESLiveGCDTimer;

@interface IESLiveAnchorPFBackgroundHandler : IESLiveAnchorPFBaseHandler

@property (retain, nonatomic) IESLiveGCDTimer *backgroundTimer;
@property (nonatomic) long long enterBackgroundDuration;
@property (nonatomic) unsigned long long backgroundTask;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)stopBackgroundTimer;
- (void)stopBackgroundTask;
- (void)startBackgroundTimer;
- (id)providedPerfInfo;
- (void).cxx_destruct;
- (void)startBackgroundTask;
- (void)didLoad;
- (void)addObservers;
- (void)didUnload;

@end
