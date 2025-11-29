@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveRandomMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int applyPos;

+ (void)initialize;

@end
