@class FinderJumpInfo;

@interface CommentTemplateFollowFeedInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long refObjectId;
@property (retain, nonatomic) FinderJumpInfo *feedJumpInfo;
@property (retain, nonatomic) FinderJumpInfo *templateJumpInfo;

+ (void)initialize;

@end
