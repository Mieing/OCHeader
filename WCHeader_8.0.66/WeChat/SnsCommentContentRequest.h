@interface SnsCommentContentRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) int commentId;
@property (nonatomic) unsigned long long commentId2;
@property (nonatomic) int type;

+ (void)initialize;

- (void)setType:(int)a0;
- (int)type;
- (void)setCommentId2:(unsigned long long)a0;
- (unsigned long long)commentId2;
- (void)setCommentId:(int)a0;
- (int)commentId;
- (void)setId:(unsigned long long)a0;
- (unsigned long long)id;

@end
