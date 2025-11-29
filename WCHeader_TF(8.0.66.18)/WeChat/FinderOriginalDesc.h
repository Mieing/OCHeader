@class FinderOriginalMusicInfo;

@interface FinderOriginalDesc : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderOriginalMusicInfo *musicInfo;

+ (void)initialize;

- (void)setMusicInfo:(id)a0;
- (id)musicInfo;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
