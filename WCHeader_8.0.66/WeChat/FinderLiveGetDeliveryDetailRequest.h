@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetDeliveryDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *reqBuffer;

+ (void)initialize;

@end
