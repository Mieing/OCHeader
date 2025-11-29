@class MusicRingBack, FinderRingBack;

@interface RingBack : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int startTs;
@property (nonatomic) unsigned int endTs;
@property (retain, nonatomic) MusicRingBack *musicRingBack;
@property (retain, nonatomic) FinderRingBack *finderRingBack;

+ (void)initialize;

- (void)setFinderRingBack:(id)a0;
- (id)finderRingBack;
- (void)setMusicRingBack:(id)a0;
- (id)musicRingBack;
- (void)setEndTs:(unsigned int)a0;
- (unsigned int)endTs;
- (void)setStartTs:(unsigned int)a0;
- (unsigned int)startTs;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
