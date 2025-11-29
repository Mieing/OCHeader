@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderEventUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *posterUsername;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
