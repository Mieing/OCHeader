@class NSDate, AWEAwemeModel;

@interface AWELivingCellTrackerViewModel : NSObject

@property (nonatomic) BOOL hasTrackShow;
@property (copy, nonatomic) id /* block */ commonParamsGetter;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *vsShowAwemeModel;
@property (nonatomic) double playStartTime;
@property (nonatomic) BOOL hasAlreadyPlayed;
@property (nonatomic) BOOL hasTrackedAdPlay;
@property (retain, nonatomic) NSDate *liveShowDate;
@property (retain, nonatomic) NSDate *firstFrameDate;
@property (nonatomic) BOOL hasTrackedFirstFrameDuration;
@property (nonatomic) long long startLocation;
@property (nonatomic) BOOL didStartFromHighlight;
@property (nonatomic) BOOL didStartFromHistory;

- (void)updateAwemeModel:(id)a0;
- (void)trackAdBreak;
- (void)trackAdLiveShowFailed:(long long)a0;
- (void)trackAdPlay;
- (void)trackAdOver;
- (id)addCommonParamsWithExtraParams:(id)a0;
- (id)getStartLocationFormatTime;
- (void)trackLiveAdVsEventWithLabel:(id)a0 tag:(id)a1 extra:(id)a2;
- (void)trackWithKey:(id)a0 params:(id)a1;
- (void)trackShow:(BOOL)a0 isVertical:(BOOL)a1;
- (id)durationBetweenBeginTime:(double)a0 endTime:(double)a1;
- (id)initWithCommonParamGetter:(id /* block */)a0;
- (id)durationBetweenBeginDate:(id)a0 endDate:(id)a1;
- (void)trackFollowActionWithIsVideo:(BOOL)a0 isVertical:(BOOL)a1;
- (void)trackFollowSuccessActionWithStatus:(long long)a0 error:(id)a1;
- (void)trackPlayFinishWithVertical:(BOOL)a0;
- (void)trackLiveFinishWithIsVideo:(BOOL)a0 isVertical:(BOOL)a1;
- (void)trackPlayWithIsVideo:(BOOL)a0 isVertical:(BOOL)a1;
- (void)trackClickWithLiveEnd:(BOOL)a0 isLiveVideo:(BOOL)a1 isVertical:(BOOL)a2;
- (void)trackAdNameClickSource;
- (void)trackAdClick;
- (void)trackPlayDurationWithStartTime:(double)a0 isVideo:(BOOL)a1 isPortraitStream:(BOOL)a2;
- (void)trackEventForVSFirstFrameDurationIfNeededWithEpisode:(id)a0;
- (void)trackEpisodePurchaseFreeTrailFinishViewShowSkuId:(id)a0 saleType:(long long)a1;
- (void)trackEpisodePurchaseClickSkuId:(id)a0 saleType:(long long)a1;
- (void)trackEpisodePurchaseGoToWatchClick;
- (void)recordFirstFrameStartTime:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
