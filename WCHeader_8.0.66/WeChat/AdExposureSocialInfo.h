@interface AdExposureSocialInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int commentCount;

+ (void)initialize;

- (void)setCommentCount:(unsigned int)a0;
- (unsigned int)commentCount;
- (void)setLikeCount:(unsigned int)a0;
- (unsigned int)likeCount;

@end
