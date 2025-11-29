@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveGetLotteryPrepareDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;

+ (void)initialize;

@end
