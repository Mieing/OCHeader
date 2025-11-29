@class NSString, StoryObject;

@interface StorySyncMsgDetail : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *fromNickName;
@property (retain, nonatomic) NSString *toNickName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) int commentId;
@property (nonatomic) int replyCommentId;
@property (nonatomic) unsigned int isNotRichText;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) StoryObject *storyObject;
@property (nonatomic) unsigned int bubbleEnhance;
@property (nonatomic) unsigned int objCreateTime;
@property (retain, nonatomic) NSString *objOwner;
@property (nonatomic) unsigned int isFeatured;

+ (void)initialize;

@end
