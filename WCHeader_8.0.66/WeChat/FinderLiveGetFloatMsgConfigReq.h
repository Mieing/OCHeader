@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetFloatMsgConfigReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
