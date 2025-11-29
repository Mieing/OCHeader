@class BaseRequest, NSString, FinderLiveLotteryMethodItem, FinderBaseRequest;

@interface FinderLiveModLotteryMethodRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderusername;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *item;
@property (nonatomic) unsigned int methodId;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
