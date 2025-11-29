@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetLiveIncomePageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
