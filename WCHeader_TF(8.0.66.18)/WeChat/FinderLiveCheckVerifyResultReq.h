@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveCheckVerifyResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int verifyType;
@property (retain, nonatomic) NSString *secverifyId;

+ (void)initialize;

@end
