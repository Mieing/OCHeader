@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveCheckLotteryBillRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderusername;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *billNo;

+ (void)initialize;

@end
