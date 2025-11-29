@class NSString, MPCommentReply, NSMutableArray;

@interface MPCommentMsg : MMObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long commentTopicId;
@property (nonatomic) unsigned int userCommentId;
@property (nonatomic) unsigned int personalCommentId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *headImageUrl;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL isLike;
@property (nonatomic) BOOL isFromFriend;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isTop;
@property (nonatomic) unsigned int likeId;
@property (retain, nonatomic) MPCommentReply *reply;
@property (retain, nonatomic) NSMutableArray *replyList;
@property (nonatomic) BOOL isSelected;

- (id)description;
- (void).cxx_destruct;

@end
