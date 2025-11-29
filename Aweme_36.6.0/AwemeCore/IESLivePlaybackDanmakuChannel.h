@interface IESLivePlaybackDanmakuChannel : IESLiveDanmakuChannel

@property (nonatomic) long long channelIndex;
@property (nonatomic) long long showingSpecialCount;
@property (nonatomic) BOOL officialIsWaiting;

- (void)removeAllDanmuku;
- (id)initWithChannelType:(unsigned long long)a0 contentView:(id)a1 settings:(id)a2 offsetY:(double)a3;
- (BOOL)addDanmukuNode:(id)a0;
- (id)p_dequeueReusableDanmukuViewWithNode:(id)a0;
- (id)p_findDanmuViewForNode:(id)a0;
- (void)checkChannelIsAvailable;

@end
