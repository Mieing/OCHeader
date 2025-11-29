@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderLiveGetLotteryRecordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long objectNonceId;
@property (retain, nonatomic) NSString *lotteryId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
