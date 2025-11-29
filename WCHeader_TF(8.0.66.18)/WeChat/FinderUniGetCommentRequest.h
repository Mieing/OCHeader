@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderUniGetCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBaserequest;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;
@property (nonatomic) unsigned long long commentId;
@property (nonatomic) unsigned long long rootCommentId;
@property (nonatomic) unsigned long long refCommentId;
@property (nonatomic) unsigned long long maxCommentId;
@property (nonatomic) unsigned int direction;
@property (nonatomic) unsigned int interactionIdentity;
@property (nonatomic) unsigned int pullScene;
@property (retain, nonatomic) NSString *feedOwnerUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *bypassBuffer;
@property (nonatomic) unsigned int bypassBufferType;

+ (void)initialize;

@end
