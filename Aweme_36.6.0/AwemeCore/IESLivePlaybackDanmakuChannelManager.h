@class IESLivePlaybackDanmakuPopView, CADisplayLink;

@interface IESLivePlaybackDanmakuChannelManager : IESLiveDanmakuChannelManager

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) IESLivePlaybackDanmakuPopView *popDanmakuView;

- (void)captureFrame:(id)a0;
- (void)removeAllDanmuku;
- (void)resetChannel;
- (BOOL)hasAvailableChannelForGift;
- (id)availableChannel;
- (void)newChannelAvailable:(id)a0;
- (id)initWithChannelType:(unsigned long long)a0 contentView:(id)a1 settings:(id)a2;
- (BOOL)hasAvailableChannelForNode:(id)a0;
- (void)tapDanmakuContent:(id)a0;
- (BOOL)hasAvailableChannelForSpecial;
- (void)showPopDanmakuViewWithDanmakuView:(id)a0;
- (void)showDouplusPopDanmakuViewWithDanmakuView:(id)a0;
- (id)availableChannelForOfficialNode:(id)a0 remainingCount:(long long)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)availableChannels;

@end
