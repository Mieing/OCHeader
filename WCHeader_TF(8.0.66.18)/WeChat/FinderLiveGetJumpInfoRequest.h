@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetJumpInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSData *jumpInfoBuffer;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSData *uxInfo;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
