@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveTopCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned long long objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned int liveScene;
@property (retain, nonatomic) NSString *originalClientMsgId;

+ (void)initialize;

@end
