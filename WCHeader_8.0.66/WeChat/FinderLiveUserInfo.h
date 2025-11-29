@class NSString;

@interface FinderLiveUserInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int enableComment;
@property (nonatomic) unsigned int enableFriendChat;
@property (nonatomic) unsigned int bannedCommentBySpam;
@property (retain, nonatomic) NSString *bannedCommentWording;

+ (void)initialize;

@end
