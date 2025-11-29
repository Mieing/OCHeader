@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetLotteryPanelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *anchorFinderusername;

+ (void)initialize;

@end
