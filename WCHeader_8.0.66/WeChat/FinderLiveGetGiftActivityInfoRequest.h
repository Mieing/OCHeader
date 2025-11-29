@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetGiftActivityInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSData *liveCookies;

+ (void)initialize;

@end
