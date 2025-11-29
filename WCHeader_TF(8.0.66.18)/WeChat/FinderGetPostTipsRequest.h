@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetPostTipsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
