@interface AWEHotSpotPerformanceViewModel : NSObject

@property (nonatomic) long long tabClickTime;
@property (nonatomic) long long viewPrepareTime;
@property (nonatomic) long long callPlayTime;
@property (nonatomic) long long firstPlayTime;
@property (nonatomic) long long videoRealPlayTime;
@property (nonatomic) long long dataStartLoadTime;
@property (nonatomic) long long dataEndLoadTime;
@property (nonatomic) long long dataHandleTime;
@property (nonatomic) long long skyLightDataStartLoadTime;
@property (nonatomic) long long skyLightDataEndLoadTime;
@property (nonatomic) long long skyLightLoadTime;
@property (nonatomic) long long skyLightShowTime;
@property (nonatomic) BOOL hasReport;
@property (nonatomic) double baseTime;

+ (long long)currentTime;

- (void)updateTabClickTime;
- (void)updateViewPrepareTime;
- (void)updateCallPlayTime;
- (void)updateFirstPlayTime;
- (void)updateVideoRealPlayTime;
- (void)updateDataStartLoadTime;
- (void)updateDataEndLoadTime;
- (void)updateDataHandleTime;
- (void)updateSkyLightDataStartLoadTime;
- (void)updateSkyLightDataEndLoadTime;
- (void)updateSkyLightLoadTime;
- (void)updateSkyLightShowTime;
- (void)reportPerformanceWithLogExtra:(id)a0;

@end
