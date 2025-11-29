@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSelectGoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *qrcodeUrl;

+ (void)initialize;

@end
