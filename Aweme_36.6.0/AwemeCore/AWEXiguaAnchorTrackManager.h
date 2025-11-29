@interface AWEXiguaAnchorTrackManager : NSObject

@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) double timeForClick;

+ (void)trackForClick;
+ (void)startMonitorTrackEvent;
+ (void)stopMonitorTrackEvent;
+ (void)trackForJsbReportLifeCycleWithParams:(id)a0;
+ (id)sharedManager;

- (void)startMonitorTrackEvent;
- (void)stopMonitorTrackEvent;
- (void)adVCDidDismissNotification:(id)a0;
- (void)adVCWillLoadRequest:(id)a0;
- (void)adUrlTaskDidFinishLoad:(id)a0;
- (id)init;

@end
