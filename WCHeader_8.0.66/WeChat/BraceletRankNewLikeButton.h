@interface BraceletRankNewLikeButton : MMUIButton

@property (nonatomic) BOOL hasLike;
@property (nonatomic) BOOL isSelf;
@property (nonatomic) unsigned int likeCount;

- (id)initWithLikeCount:(unsigned int)a0 hasLike:(BOOL)a1 isSelf:(BOOL)a2;
- (void)initView;
- (void)animatChangeToLikeState:(BOOL)a0;

@end
