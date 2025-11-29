@class AWEAwemeModel;

@interface AWETeenFeedQualityOldMonitor : NSObject

@property (nonatomic) double startAutoPlayTime;
@property (nonatomic) long long vcType;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstanced;

- (void)p_trackCancelQuality;
- (void)p_trackCancelByPause;
- (void)p_trackFinishQualityFirstPlay:(BOOL)a0;
- (void)p_startAutoPlayQuality;
- (void)oldTrackColdLaunchFirstFrame:(BOOL)a0;
- (id)p_qualityIdentifier;
- (void).cxx_destruct;

@end
