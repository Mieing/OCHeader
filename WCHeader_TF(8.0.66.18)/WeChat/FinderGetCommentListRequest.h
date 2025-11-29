@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderGetCommentListCtx;

@interface FinderGetCommentListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int identityScene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int direction;
@property (nonatomic) unsigned long long rootCommentId;
@property (nonatomic) unsigned long long refCommentId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int requestScene;
@property (retain, nonatomic) FinderGetCommentListCtx *ctx;
@property (retain, nonatomic) NSString *exportObjectId;
@property (nonatomic) unsigned int pcDeviceType;
@property (retain, nonatomic) NSString *enterSessionId;
@property (nonatomic) unsigned int sortType;
@property (nonatomic) unsigned int selectionType;
@property (nonatomic) unsigned int contentType;

+ (void)initialize;

@end
