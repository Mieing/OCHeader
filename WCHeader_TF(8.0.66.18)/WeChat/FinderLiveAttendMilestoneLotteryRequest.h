@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAttendMilestoneLotteryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *milestoneLotteryId;

+ (void)initialize;

@end
