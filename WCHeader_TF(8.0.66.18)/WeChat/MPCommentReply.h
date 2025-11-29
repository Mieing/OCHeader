@class NSString;

@interface MPCommentReply : MMObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int replyId;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL isLike;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) BOOL isReplySelected;
@property (nonatomic) BOOL isFromAuthor;

- (id)description;
- (void).cxx_destruct;

@end
