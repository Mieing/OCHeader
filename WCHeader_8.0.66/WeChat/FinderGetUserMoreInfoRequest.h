@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetUserMoreInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) int scene;

+ (void)initialize;

@end
