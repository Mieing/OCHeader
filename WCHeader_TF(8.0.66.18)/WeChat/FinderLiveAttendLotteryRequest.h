@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveAttendLotteryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lotteryAttendType;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
