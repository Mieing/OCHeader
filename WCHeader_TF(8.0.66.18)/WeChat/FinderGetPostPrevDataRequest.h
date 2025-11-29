@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetPostPrevDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int dataType;

+ (void)initialize;

@end
