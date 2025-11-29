@class NSData;

@interface FinderObjectListenInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSData *audioItem;
@property (retain, nonatomic) NSData *musicItem;

+ (void)initialize;

- (void)setMusicItem:(id)a0;
- (id)musicItem;
- (void)setAudioItem:(id)a0;
- (id)audioItem;
- (void)setType:(int)a0;
- (int)type;

@end
