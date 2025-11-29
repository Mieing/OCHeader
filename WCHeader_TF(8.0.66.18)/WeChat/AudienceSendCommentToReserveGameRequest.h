@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface AudienceSendCommentToReserveGameRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *commentMsg;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
