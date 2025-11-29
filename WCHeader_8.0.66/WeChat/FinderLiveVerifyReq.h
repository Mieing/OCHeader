@class BaseRequest, FinderBaseRequest;

@interface FinderLiveVerifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;

+ (void)initialize;

@end
