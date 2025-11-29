@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, CommentContentInfo;

@interface FinderUniCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBaserequest;
@property (retain, nonatomic) NSString *clientid;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long commentId;
@property (retain, nonatomic) NSString *commentContent;
@property (nonatomic) unsigned long long rootCommentId;
@property (nonatomic) unsigned long long replyCommentId;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) unsigned int interactionIdentity;
@property (retain, nonatomic) NSMutableArray *mentionedUser;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) CommentContentInfo *contentInfo;
@property (nonatomic) unsigned long long commentTsMs;
@property (retain, nonatomic) NSString *feedOwnerUsername;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;

+ (void)initialize;

@end
