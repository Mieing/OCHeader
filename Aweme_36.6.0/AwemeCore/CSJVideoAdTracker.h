@class CSJAdSlot, NSString, NSDictionary, NSNumber, CSJMaterialMeta;

@interface CSJVideoAdTracker : NSObject

@property (copy, nonatomic) id /* block */ tagBlcok;
@property (copy, nonatomic) id /* block */ timeBlock;
@property (copy, nonatomic) id /* block */ metaBlock;
@property (copy, nonatomic) id /* block */ slotBlock;
@property (nonatomic) BOOL customPlayer;
@property (readonly, nonatomic) unsigned long long video_current_time;
@property (readonly, copy, nonatomic) NSNumber *video_play_percent;
@property (readonly, copy, nonatomic) NSString *video_track_tag;
@property (readonly, nonatomic) NSDictionary *video_public_parameters;
@property (readonly, nonatomic) NSDictionary *video_public_extra_parameters;
@property (readonly, nonatomic) NSDictionary *video_buffer_duration_parameters;
@property (readonly, nonatomic) CSJMaterialMeta *meta;
@property (readonly, nonatomic) CSJAdSlot *adSlot;
@property (readonly, nonatomic) unsigned long long video_cache_size;
@property (copy, nonatomic) NSString *video_session_id;
@property (nonatomic) double video_startLoad_timestamp;
@property (nonatomic) unsigned long long video_buffer_duration;
@property (nonatomic) unsigned long long video_buffer_times;
@property (nonatomic) double video_buffer_begin_timestamp;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL pause;
@property (readonly, nonatomic) unsigned long long video_play_type;
@property (readonly, copy, nonatomic) NSString *video_play_url;
@property (readonly, copy, nonatomic) NSString *video_resolution;
@property (readonly, nonatomic) unsigned long long video_size;
@property (readonly, nonatomic) unsigned long long video_duration;
@property (nonatomic) unsigned long long holdPlayerCount;

+ (id)rewardVideoTagBySlotType:(long long)a0;
+ (void)reportVideoPreloadBeginWithTag:(id)a0 videoAdMeta:(id)a1;
+ (void)reportVideoPreloadSuccessWithTag:(id)a0 videoAdMeta:(id)a1;
+ (void)reportVideoPreloadFaildWithTag:(id)a0 videoAdMeta:(id)a1;
+ (id)videoPreloadPublicParameters:(id)a0;
+ (void)reportPreloadVideoCancelWithTag:(id)a0 videoAdMeta:(id)a1;

- (void)reportVideoReset;
- (id)initWithVideoTagBlock:(id /* block */)a0 playTimeBlock:(id /* block */)a1 metaBlock:(id /* block */)a2 slotBlock:(id /* block */)a3;
- (void)reportLiveCoverImageRender:(BOOL)a0 duration:(long long)a1;
- (void)reportLiveStartPlay;
- (void)reportVideoStartPlay;
- (void)reportVideoFirstRender:(BOOL)a0;
- (void)reportVideoPause;
- (void)reportVideoResume;
- (void)recordEndBuffer;
- (void)recordBeginBuffer;
- (void)reportVideoPlayOver;
- (void)reportVideoError:(id)a0;
- (void)configVideoInfoWithDecodeMode:(unsigned long long)a0 h265VideoInfo:(id)a1 h264VideoInfo:(id)a2;
- (void)reportLiveFirstRender;
- (void)reportLivePlayResume;
- (void)reportLivePlayPause;
- (void)reportLivePlayClose:(unsigned long long)a0;
- (void)reportLivePlayError:(id)a0;
- (void)reportVideoAutoReplay;
- (void)reportVideoWithPlayerBreakType:(unsigned long long)a0;
- (void)reportVideoEndCard:(long long)a0 hasPlayed:(BOOL)a1;
- (void)configVideoInfoWithDecodeMode:(unsigned long long)a0 h265VideoInfo:(id)a1 h264VideoInfo:(id)a2 customPlayer:(BOOL)a3;
- (id)p_customPalyerLabel:(id)a0;
- (void)reportVideoWithPlayerBreakType:(unsigned long long)a0 tag:(id)a1 meta:(id)a2;
- (void)reportVideoPlayBuffer;
- (void)reportVideoReplay;
- (void).cxx_destruct;

@end
