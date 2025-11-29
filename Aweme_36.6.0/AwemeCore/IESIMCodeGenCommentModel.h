@class IESIMCodeGenIMStickerModel, NSString, NSArray, IESIMCodeGenCommentUserModel;

@interface IESIMCodeGenCommentModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) long long createTime;
@property (nonatomic) int diggCount;
@property (nonatomic) int status;
@property (retain, nonatomic) IESIMCodeGenCommentUserModel *userModel;
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
@property (retain, nonatomic) IESIMCodeGenIMStickerModel *stickerModel;
@property (nonatomic) int stickPosition;
@property (nonatomic) int level;
@property (nonatomic) int contentType;
@property (copy, nonatomic) NSArray *imageListModelArray;
@property (copy, nonatomic) NSString *ipLabel;
@property (nonatomic) int serviceId;
@property (nonatomic) BOOL canShare;
@property (nonatomic) BOOL userBuried;
@property (copy, nonatomic) NSString *replyToUserSecId;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
