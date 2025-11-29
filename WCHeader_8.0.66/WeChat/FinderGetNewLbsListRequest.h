@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderGetNewLbsListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *requestList;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
