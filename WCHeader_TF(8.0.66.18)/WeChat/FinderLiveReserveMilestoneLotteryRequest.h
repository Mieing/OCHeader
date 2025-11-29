@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveReserveMilestoneLotteryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *nonceId;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
