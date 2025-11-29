@class NewLifeReportInfo, BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray, CommentContentInfo;

@interface FinderCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long objectid;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) unsigned long long replyCommentId;
@property (retain, nonatomic) NSString *replyUsername;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *clientid;
@property (nonatomic) unsigned long long rootCommentId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) NSMutableArray *commentMentionedUser;
@property (retain, nonatomic) NSMutableArray *pastedContent;
@property (retain, nonatomic) NSString *clientUdfKv;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) CommentContentInfo *contentInfo;
@property (retain, nonatomic) NSMutableArray *mentionedUserList;
@property (retain, nonatomic) NewLifeReportInfo *newlifeReportInfo;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;

+ (void)initialize;

@end
