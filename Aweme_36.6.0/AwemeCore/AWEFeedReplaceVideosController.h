@interface AWEFeedReplaceVideosController : AWEBaseController

@property (nonatomic) long long triggerFrequencyTimeThreshold;
@property (nonatomic) double lastTriggerTime;

- (void)p_replaceUnconsumedVideosWithNotification:(id)a0;
- (BOOL)isValidScene;
- (BOOL)shouldTriggerWithTimeFrequency;
- (BOOL)p_shouldReplaceVideoWithModel:(id)a0 replaceConfig:(id)a1;
- (void)p_replaceUnconsumedVideosWithList:(id)a0 replaceConfig:(id)a1 trackInfo:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;

@end
