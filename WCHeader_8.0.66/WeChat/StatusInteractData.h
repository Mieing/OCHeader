@interface StatusInteractData : WXPBGeneratedMessage

@property (nonatomic) int likeCount;
@property (nonatomic) long long likeCountSequence;
@property (nonatomic) int commentCount;
@property (nonatomic) long long commentSequence;

+ (void)initialize;

- (void)setCommentSequence:(long long)a0;
- (long long)commentSequence;
- (void)setCommentCount:(int)a0;
- (int)commentCount;
- (void)setLikeCountSequence:(long long)a0;
- (long long)likeCountSequence;
- (void)setLikeCount:(int)a0;
- (int)likeCount;

@end
