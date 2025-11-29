@class NSTimer, NSString;

@interface AWEGCPPlayValidWidget : IESGCPBaseWidget <AWEGCPVideoContainerActions>

@property (retain, nonatomic) NSTimer *playValidTimer;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hasReportPlayValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (void)currentPlayVideoDidChangePlayState:(long long)a0 videoContainer:(id)a1;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)reportPlayValid;
- (void)registerObserver;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;

@end
