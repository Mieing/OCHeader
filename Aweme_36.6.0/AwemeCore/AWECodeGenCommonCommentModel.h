@class NSString, NSArray, AWECodeGenRelativeUserModel;

@interface AWECodeGenCommonCommentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) long long createTime;
@property (nonatomic) int diggCount;
@property (nonatomic) int status;
@property (retain, nonatomic) AWECodeGenRelativeUserModel *userModel;
@property (copy, nonatomic) NSString *replyId;
@property (nonatomic) int userDigged;
@property (copy, nonatomic) NSArray *replyCommentModelArray;
@property (copy, nonatomic) NSArray *textExtraModelArray;
@property (copy, nonatomic) NSString *forwardId;
@property (nonatomic) long long replyCommentTotal;
@property (copy, nonatomic) NSString *replyToReplyId;
@property (copy, nonatomic) NSString *replyToUserName;
@property (copy, nonatomic) NSString *replyToUserId;
@property (nonatomic) BOOL isAuthorDigged;
@property (nonatomic) int level;
@property (nonatomic) int contentType;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL userBuried;
@property (copy, nonatomic) NSString *replyToUserSecUid;
@property (copy, nonatomic) NSString *replyToUsername;
@property (copy, nonatomic) NSString *replyToUserid;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
