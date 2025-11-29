@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderMarkReadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *readStats;

+ (void)initialize;

@end
