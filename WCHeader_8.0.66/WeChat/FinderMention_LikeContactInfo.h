@interface FinderMention_LikeContactInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int likeType;
@property (nonatomic) unsigned long long likeId;
@property (nonatomic) unsigned int followMyFirstLike;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setFollowMyFirstLike:(unsigned int)a0;
- (unsigned int)followMyFirstLike;
- (void)setLikeId:(unsigned long long)a0;
- (unsigned long long)likeId;
- (void)setLikeType:(unsigned int)a0;
- (unsigned int)likeType;
- (id)archivedWCTValue;

@end
