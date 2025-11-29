@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPostBulletCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long videoTimestamp;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long commentSource;
@property (nonatomic) unsigned int postIdentity;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned long long followBulletCommentId;
@property (nonatomic) unsigned int feedPlayTimes;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long replyCommentId;

+ (void)initialize;

@end
