@class FinderLiveAppMsg, BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderApplyLiveMicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveAppMsg *msg;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
