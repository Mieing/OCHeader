@interface AWEHotSpotFusionMultiTabPerformanceViewModel : NSObject

@property (nonatomic) long long dataFromType;
@property (nonatomic) long long startTime;
@property (nonatomic) long long startRequestTime;
@property (nonatomic) long long endRequestTime;
@property (nonatomic) long long startSnapTime;
@property (nonatomic) long long endSnapTime;
@property (nonatomic) long long startTransTime;
@property (nonatomic) long long endTransTime;

+ (id)tabType2Name:(long long)a0;
+ (long long)currentTime;

- (void)reportPerformanceWithLogExtra:(id)a0;
- (void)reportGeneralAppendPendingWithLogExtra:(id)a0;

@end
