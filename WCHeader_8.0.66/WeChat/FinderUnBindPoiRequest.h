@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderUnBindPoiRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
