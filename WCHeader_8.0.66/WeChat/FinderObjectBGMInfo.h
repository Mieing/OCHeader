@class NSString, FinderMusicInfo;

@interface FinderObjectBGMInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderMusicInfo *musicInfo;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int hasBgm;

+ (void)initialize;

- (void)setHasBgm:(unsigned int)a0;
- (unsigned int)hasBgm;
- (void)setGroupId:(id)a0;
- (id)groupId;
- (void)setMusicInfo:(id)a0;
- (id)musicInfo;

@end
