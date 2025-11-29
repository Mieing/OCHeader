@class NSDictionary;

@interface AWERecord24StoryCaptureGuideViewModel : ACCRecorderViewModel

@property (copy, nonatomic) NSDictionary *configDict;

- (BOOL)shouldShowGuideView;
- (double)delayDismissGuideViewTime;
- (id)viewConfigModel;
- (void)increaseGuideViewShowedCount;
- (long long)cachedGuideShowedCount;
- (long long)guideViewMaxShowTime;
- (id)cachedGuideShowedKey;
- (void).cxx_destruct;

@end
