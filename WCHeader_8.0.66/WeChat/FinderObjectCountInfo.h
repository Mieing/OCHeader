@class FinderObjectVersionData;

@interface FinderObjectCountInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int forwardCount;
@property (nonatomic) unsigned int readCount;
@property (nonatomic) unsigned int favCount;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

- (void)setVersionData:(id)a0;
- (id)versionData;
- (void)setFavCount:(unsigned int)a0;
- (unsigned int)favCount;
- (void)setReadCount:(unsigned int)a0;
- (unsigned int)readCount;
- (void)setForwardCount:(unsigned int)a0;
- (unsigned int)forwardCount;
- (void)setLikeCount:(unsigned int)a0;
- (unsigned int)likeCount;
- (void)setCommentCount:(unsigned int)a0;
- (unsigned int)commentCount;

@end
