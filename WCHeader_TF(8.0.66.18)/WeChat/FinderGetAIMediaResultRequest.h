@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetAIMediaResultRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *generateKey;

+ (void)initialize;

@end
