@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveNewAcceptPkRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *targetFinderUsername;
@property (retain, nonatomic) NSString *applyId;
@property (retain, nonatomic) NSData *randomPkBuffer;

+ (void)initialize;

@end
