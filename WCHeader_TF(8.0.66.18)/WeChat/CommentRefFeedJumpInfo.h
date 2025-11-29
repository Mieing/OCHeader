@class FinderJumpInfo;

@interface CommentRefFeedJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long refObjectId;
@property (retain, nonatomic) FinderJumpInfo *feedJumpInfo;
@property (retain, nonatomic) FinderJumpInfo *templateJumpInfo;
@property (retain, nonatomic) FinderJumpInfo *topicWordJumpInfo;
@property (retain, nonatomic) FinderJumpInfo *musicJumpInfo;

+ (void)initialize;

@end
