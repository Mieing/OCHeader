@class BaseRequest, NSString, FinderLiveLotteryMethodItem, FinderBaseRequest;

@interface FinderLiveMakeLotteryOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderusername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *item;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int methodId;

+ (void)initialize;

@end
