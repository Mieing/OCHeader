@class NSString, TingTapeItem, TingItem;

@interface TingTapePlayingInfo : NSObject

@property (nonatomic) int status;
@property (nonatomic) double currentTime;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) TingItem *playingItem;
@property (retain, nonatomic) TingTapeItem *tapeItem;

- (id)initWithTapeSnapshot:(id)a0;
- (id)clientId;
- (BOOL)isPlaying;
- (BOOL)isPlayingAudio;
- (id)playingCategoryItem;
- (id)title;
- (id)desc;
- (void).cxx_destruct;

@end
