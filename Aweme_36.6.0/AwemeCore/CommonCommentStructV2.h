@class NSString, NSMutableArray, RelativeUserStructV2;

@interface CommonCommentStructV2 : GPBMessage

@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL hasCid;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL hasItemId;
@property (nonatomic) long long createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) int diggCount;
@property (nonatomic) BOOL hasDiggCount;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) RelativeUserStructV2 *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *replyId;
@property (nonatomic) BOOL hasReplyId;
@property (nonatomic) int userDigged;
@property (nonatomic) BOOL hasUserDigged;
@property (retain, nonatomic) NSMutableArray *replyCommentArray;
@property (readonly, nonatomic) unsigned long long replyCommentArray_Count;
@property (retain, nonatomic) NSMutableArray *textExtraArray;
@property (readonly, nonatomic) unsigned long long textExtraArray_Count;
@property (copy, nonatomic) NSString *forwardId;
@property (nonatomic) BOOL hasForwardId;
@property (nonatomic) long long replyCommentTotal;
@property (nonatomic) BOOL hasReplyCommentTotal;
@property (copy, nonatomic) NSString *replyToReplyId;
@property (nonatomic) BOOL hasReplyToReplyId;
@property (copy, nonatomic) NSString *replyToUserName;
@property (nonatomic) BOOL hasReplyToUserName;
@property (copy, nonatomic) NSString *replyToUserId;
@property (nonatomic) BOOL hasReplyToUserId;
@property (nonatomic) BOOL isAuthorDigged;
@property (nonatomic) BOOL hasIsAuthorDigged;
@property (nonatomic) int level;
@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int contentType;
@property (nonatomic) BOOL hasContentType;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL hasCanShare;
@property (nonatomic) BOOL userBuried;
@property (nonatomic) BOOL hasUserBuried;
@property (copy, nonatomic) NSString *replyToUserSecUid;
@property (nonatomic) BOOL hasReplyToUserSecUid;
@property (copy, nonatomic) NSString *replyToUsername;
@property (nonatomic) BOOL hasReplyToUsername;
@property (copy, nonatomic) NSString *replyToUserid;
@property (nonatomic) BOOL hasReplyToUserid;

+ (id)descriptor;

@end
