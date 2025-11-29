@class NSString;

@interface NewLifeMentionCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int mentionLikeCount;
@property (nonatomic) unsigned int mentionFollowCount;
@property (nonatomic) unsigned int mentionGlobalFavCount;
@property (nonatomic) unsigned int mentionCommentCount;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int mentionedCount;
@property (nonatomic) unsigned int interactionTabTotalCount;
@property (nonatomic) unsigned int commentTabTotalCount;

+ (void)initialize;

@end
