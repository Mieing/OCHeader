@class BaseRequest, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderSnsGetLiveObjectListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *stats;

+ (void)initialize;

@end
