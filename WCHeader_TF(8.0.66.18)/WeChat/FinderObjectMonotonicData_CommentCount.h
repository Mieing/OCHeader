@class FinderObjectVersionData;

@interface FinderObjectMonotonicData_CommentCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int imageCommentCount;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

- (void)setVersionData:(id)a0;
- (id)versionData;
- (void)setImageCommentCount:(unsigned int)a0;
- (unsigned int)imageCommentCount;
- (void)setCommentCount:(unsigned int)a0;
- (unsigned int)commentCount;

@end
