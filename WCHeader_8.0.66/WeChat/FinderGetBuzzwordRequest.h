@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderGetBuzzwordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *objectIds;

+ (void)initialize;

@end
