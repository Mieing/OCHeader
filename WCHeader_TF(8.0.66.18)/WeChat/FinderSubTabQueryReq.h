@class BaseRequest, FinderBaseRequest;

@interface FinderSubTabQueryReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int displayTabType;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end
