@class NSString, NSMutableArray;

@interface FinderLiveVideoAdInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *liveAdId;
@property (nonatomic) unsigned long long startTimeMs;
@property (nonatomic) unsigned long long videoDurationMs;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *bgImgUrl;
@property (nonatomic) unsigned long long endTimeMs;
@property (nonatomic) BOOL needWatchMultiEntranceAd;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) unsigned int preloadPercent;
@property (retain, nonatomic) NSMutableArray *showTimeIntervals;

+ (void)initialize;

- (void)setShowTimeIntervals:(id)a0;
- (id)showTimeIntervals;
- (void)setPreloadPercent:(unsigned int)a0;
- (unsigned int)preloadPercent;
- (void)setNeedPreload:(BOOL)a0;
- (BOOL)needPreload;
- (void)setNeedWatchMultiEntranceAd:(BOOL)a0;
- (BOOL)needWatchMultiEntranceAd;
- (void)setEndTimeMs:(unsigned long long)a0;
- (unsigned long long)endTimeMs;
- (void)setBgImgUrl:(id)a0;
- (id)bgImgUrl;
- (void)setVideoUrl:(id)a0;
- (id)videoUrl;
- (void)setVideoDurationMs:(unsigned long long)a0;
- (unsigned long long)videoDurationMs;
- (void)setStartTimeMs:(unsigned long long)a0;
- (unsigned long long)startTimeMs;
- (void)setLiveAdId:(id)a0;
- (id)liveAdId;

@end
