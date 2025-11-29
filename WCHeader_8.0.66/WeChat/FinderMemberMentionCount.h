@class NSString;

@interface FinderMemberMentionCount : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long updatetime;
@property (nonatomic) unsigned int mentionLikeCount;
@property (nonatomic) unsigned int mentionCommentCount;
@property (nonatomic) unsigned int mentionThumbLikeCount;
@property (nonatomic) unsigned int newMemberJoinCount;
@property (nonatomic) unsigned int memberQaReceiveQuestionCount;

+ (void)initialize;

@end
