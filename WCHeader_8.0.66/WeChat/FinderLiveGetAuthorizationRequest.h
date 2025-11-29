@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetAuthorizationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *deviceId;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;

+ (void)initialize;

@end
