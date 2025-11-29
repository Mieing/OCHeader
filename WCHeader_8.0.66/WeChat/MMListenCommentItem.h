@class MMListenUserInfo, NSString, MMListenCommentContentInfo;

@interface MMListenCommentItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) MMListenUserInfo *commentUser;
@property (nonatomic) BOOL isLiked;
@property (nonatomic) BOOL isDislike;
@property (nonatomic) int likeNum;
@property (nonatomic) int dislikeNum;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) MMListenCommentContentInfo *contentInfo;
@property (nonatomic) unsigned int createTime;

+ (void)initialize;

@end
