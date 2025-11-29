@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderGetScreenCastRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *objectIds;

+ (void)initialize;

@end
