@class BaseRequest, FinderBaseRequest;

@interface FinderLiveEntranceVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) int entranceStatus;

+ (void)initialize;

@end
